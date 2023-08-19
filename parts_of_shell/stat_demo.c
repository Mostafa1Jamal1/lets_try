#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/types.h>
/*
int main(int argc, char **argv)
{
	struct stat statbuf;
	int i;

	if (argc < 2)
		printf("try again\n");
	for (i = 1; i < argc; i++)
	{
		printf("%s : ", argv[i]);
		if (stat(argv[i], &statbuf) == 0)
			printf("Found\n");
		else
			printf("Not found\n");
	}
	return(0);
}
*/
int main(int ac, char **av)
{
    unsigned int i;
    struct stat st;

    if (ac < 2)
    {
        printf("Usage: %s path_to_file ...\n", av[0]);
        return (1);
    }
    i = 1;
    while (av[i])
    {
        printf("%s:", av[i]);
        if (stat(av[i], &st) == 0)
        {
            printf(" FOUND\n");
        }
        else
        {
            printf(" NOT FOUND\n");
        }
        i++;
    }
    return (0);
}
