#include <stdio.h>
#include <string.h>
#include <stdlib.h>
extern char **environ;

int main(void)
{
	int i = 0;
	char *strcopy;

	while (environ[i] != NULL)
	{
		strcopy = malloc(strlen(environ[i]) + 1);
		if (!strcopy)
			printf("Failed to allocate memory\n");
		strcpy(strcopy, environ[i]);
		strtok(strcopy, "=");
		if (!strcmp(strcopy, "PATH"))
		{
			printf("%s\n", strcopy);
			free(strcopy);
			return (0);
		}
		free(strcopy);
		i++;
	}
	return (0);
}
