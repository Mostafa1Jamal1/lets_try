#include <stdio.h>
/**
 * cmptilllastmatch - compare till matching
 *
 * @c1: a pointer to the char skipped till matching
 * @c2: a pointer to the char to match to
 *
 * Return: the position of the matching char starting from 1
 * if reached the end of c2 and no matching return the length of c2
 */

int cmptilllastmatch(char *c1, char *c2)
{
    int x;

    if (*c1 == 0)
		return (1);
    if (*c1 != *c2)
		return (1 + cmptilllastmatch(c1 + 1, c2));
    if (*c1 == *c2)
    {
        x = cmptilllastmatch(c1 + 1, c2);
        if (*(c1 + x + 1) == 0)
		    return (1);
        else
            return (x + 1);
    }
	return (1);
}

int main(void)
{
    char s1[] = "dgfdfh";
    char s2[] = "";
    int x = cmptilllastmatch(s1, s2);
    printf("%d\n", x);
    return (0);
}
