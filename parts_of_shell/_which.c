#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern char **environ;


char *_which(char *cmd)
{
	char *fullpath;
	



	return (fullpath);
}

int main(void)
{	
	char cmd[] = "ls";
	char *fullpath;

	fullpath = _which(cmd);
	if (fullpath)
		return (-1);
	printf("%s\n", fullpath);
	return (0);
}
