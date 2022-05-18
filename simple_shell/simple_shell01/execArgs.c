#include "main.h"

void execArgs(char** parsed)
{
	pid_t pid = fork();
	
	if (pid == -1) {
		printf("\nFailed forking child..");
		return;
	} else if (pid == 0) {
		if (execvp(parsed[0], parsed) < 0) {
			printf("\nCould not execute command..");
		}
		exit(0);
	} else {
		wait(NULL);
		return;
	}
}
