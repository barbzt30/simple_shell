#include "main.h"

/**
 * main - entry point
 * Return: 0(success)
 */

int main()
{
	int pid = fork();
	if (pid == -1)
	{
		printf("exit\n");
	}
	else if (pid > 0)
	{
		wait pid(pid, &status, 0);
	}
	else
	{
		evecvp(command, arg);
	}
	return 0;
}
