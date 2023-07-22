#include <stdio.h>

int master(void)
{
    long double n = 123456789012345;
    printf("size of long double is: %ld\n", sizeof(long double));
    printf("the max number can hold %.0Lf\n", 10000000000 * n);
}
