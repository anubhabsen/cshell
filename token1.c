#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <signal.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <termios.h>
#include <sys/utsname.h>
#include "function.h"
char **tokenize1(char *command, char t[])
{
	int limit = 1000;
	int point = 0;
	char **tokenlist = (char **)malloc(limit * sizeof(char*)), *iterate, s[2] = ";\n", *iterate1;
	iterate = strtok(command, t);
	if(tokenlist == 0)
	{
		fprintf(stderr, "allocation error\n");
		exit(EXIT_FAILURE);
	}
	while(iterate != NULL)
	{
		tokenlist[point] = iterate;
		point++;
		if(point >= limit)
		{
			limit += limit;
			tokenlist = (char **)realloc(tokenlist, (limit * sizeof(char *)));
			if(tokenlist == 0)
			{
				fprintf(stderr, "allocation error\n");
				exit(EXIT_FAILURE);
			}

		}
		iterate = strtok(NULL,t);
	}
	return tokenlist;
}

