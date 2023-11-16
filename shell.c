#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define BUFFER_SIZE 1024

/**
 * main - Entry point.
 *
 * Return: Always 0 (Success)
 */

void prompt(void)
{
	printf("$ ");
}
int main(void)
{
	char input[BUFFER_SIZE];

	while (1)
	{
		prompt();
		if (fgets(input, sizeof(input), stdin) == NULL)
		{
			break;
		}

		input[strcspn(input, "\n")] = '\0';

		if (strcmp(input, "exit") == 0)
		{
			break;
		}
		pid_t pid = fork();

		if (pid == -1)
		{
			perror("fork");
					exit(EXIT_FAILURE);
		}
		else if (pid == 0)
		{
			char *args[] = {input, NULL};

			execvp(input, args);

			perror("execvp");
			exit(EXIT_FAILURE);
		}
		else
		{
			int status;

			waitpid(pid, &status, 0);
		}
	}
	return (0);
}
