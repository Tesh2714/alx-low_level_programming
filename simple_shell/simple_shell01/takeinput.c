#include "main.h"
#include <stdio.h>
#include <readline/readline.h>

int takeInput(char* str)
{
	char* buf;

	buf = readline("\n$$ ");
	if (strlen(buf) != 0) 
	{
		add_history(buf);
		strcpy(str, buf);
		return 0;
	} 
	else 
		return 1;
}
