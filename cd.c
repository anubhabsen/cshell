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
int changedirectory(char **argv, char path[])
{
	if(argv[1] != NULL)
	{
		if(chdir(argv[1]) == -1)
		{
			fprintf(stderr,"No such file or directory exists\n");
			return -1;
		}
		return 0;
	}
	else
	{
		chdir(path);
		return 1;
	}
}


