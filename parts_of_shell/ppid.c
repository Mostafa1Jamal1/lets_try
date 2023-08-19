#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
	pid_t parent;

	parent = getppid();
	printf("parent pid: %u\n", parent);
	return (0);
}
