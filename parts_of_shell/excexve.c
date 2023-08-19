#include <stdio.h>
#include <unistd.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
    char *argv[] = {"mostafa", "-l", "/usr/", NULL};
    char *path = "/bin/ls";

    printf("Before execve\n");
    if (execve(path, argv, NULL) == -1)
    {
        perror("Error:");
    }
    printf("After execve\n");
    return (0);
}
