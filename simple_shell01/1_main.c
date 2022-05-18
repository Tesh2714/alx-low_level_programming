#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "main.h"

#define MAXCOM 1000 
#define MAXLIST 100

#define clear() printf("\033[H\033[J")


int main()
{
	char inputString[MAXCOM], *parsedArgs[MAXLIST];
	char* parsedArgsPiped[MAXLIST];
	int execFlag = 0;
	init_shell();

	while (1) 
	{
		printDir();
		if (takeInput(inputString))
			continue;

		execFlag = processString(inputString, parsedArgs, parsedArgsPiped);

		if (execFlag == 1)
			execArgs(parsedArgs);

		if (execFlag == 2)
			execArgsPiped(parsedArgs, parsedArgsPiped);
	}
	return 0;
}
