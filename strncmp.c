#include <stdio.h>

int _strcmp(char *s1, char *s2, size_t n)
{
        int i = 0;
        int res;

        while (*(s1 + i) == *(s2 + i) && *(s1 + i) != '\0' && *(s2 + i) != '\0')
	{
		i++;
		if (i >= (int)n)
			return (0);
	}
        if (*(s1 + i) == *(s2 + i))
                res = 0;
        else
                res = (int)*(s1 + i) - (int)*(s2 + i);
        return (res);
}

int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2, 8));
    printf("%d\n", _strcmp(s2, s1, 6));
    printf("%d\n", _strcmp(s1, s1, 8));
    return (0);
}
