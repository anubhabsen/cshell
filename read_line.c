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
char *readline()
{
	char *command = NULL;
	ssize_t buf = 0;
	getline(&command, &buf, stdin);
	return command;
}

