THE SIMPLE SHELL PROJECT

Creating a simple Unix interpreter using C programming language and Betty Linter for style.

AUTHORS: Barbra Wasiwo Tendere and Emmanuel Christopher

COMPILATION: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

REQUIREMENTS:

Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
Your shell should not have any memory leaks
No more than 5 functions per file
All your header files should be include guarded
Use system calls only when you need to (why?)
Write a README with the description of your project
You should have an AUTHORS file at the root of your repository, listing all * * individuals having contributed content to the repository. Format, see Docker

SHELL INTERACTIVITY:

This shell could work in interactive mode

$ ./hsh
(~$) /bin/ls
hsh shell_main.c shell.h
(~$)
(~$) exit
$ 
And Also in Non-Interactive Mode

$ echo "/bin/ls" | ./hsh
hsh shell_main.c shell.h test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh shell_main.c shell.h test_ls_2
hsh shell_main.c shell.h test_ls_2
$

BASIC FUNCTIONALITY OVERVIEW:

Displays a prompt such as ~$ to indicate it's ready to accept input.
Waits for the user to type a command followed by pressing the Enter key (ending with a new line).

Executing Commands
Executes the entered command when the user presses Enter.
Displays the prompt again after executing a command.
Handles commands that are a single word (no arguments).

Error Handling
If an executable program cannot be found, prints an error message.
Displays the prompt again after printing the error message.
Handles errors gracefully without crashing.

End of File (EOF)
Handles the "end of file" condition (Ctrl+D) appropriately.
Exits the shell gracefully when the user presses Ctrl+D.

USAGE: ./hsh  Or <./nameofexecutable>

