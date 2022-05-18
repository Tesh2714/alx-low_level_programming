#ifndef MAIN_H
#define MAIN_H
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<readline/readline.h>
#include<readline/history.h>

#define MAXCOM 1000
#define MAXLIST 100
#define clear() printf("\033[H\033[J")

void init_shell();
int takeInput(char* str);
void printDir();
void execArgsPiped(char** parsed, char** parsedpipe);
void openHelp();
int ownCmdHandler(char** parsed);
int parsePipe(char* str, char** strpiped);
int processString(char* str, char** parsed, char** parsedpipe);
void execArgs(char** parsed);
void parseSpace(char* str, char** parsed);

#endif /*MAIN_H*/
