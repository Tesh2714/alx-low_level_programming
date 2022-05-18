#include "main.h"

void parseSpace(char* str, char** parsed)
{
	int i;

	for (i = 0; i < MAXLIST; i++)
       	{
		parsed[i] = strsep(&str, " ");
		if (parsed[i] == NULL)
			break;
		if (strlen(parsed[i]) == 0)
			i--;
		if (i > 0) 
		{
			printf("\n Error: No Arguments will be passed to programs.\n");
			exit(0);
			
		}	
 	}
 	
}
