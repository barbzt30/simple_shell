#include "main.h"

int main(int argc, char **argv)
{
char *prompt = "$";
char *lineptr;
size_t n = 0;

argc(void); argv(void);

while (1)
{
printf("%s", prompt);

getline(&lineptr, &n, stdin);
printf("%s\n", lineptr);

free(lineptr);
}

return (0);
}
