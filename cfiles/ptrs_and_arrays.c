#include <stdio.h>


int main(void)
{
	int a[5];
	int *p;
	int *p2;

	*a = 98;
	*(a + 1) = 198;
	*(a + 2) = 298;
	a[3] = 398;
	*(a + 4) = 498;
	p= a + 1;

	printf("the value of *a : %d\n", *a);
	printf("the value of a : %p\n", a);
	printf("======================================\n");
	printf("the value of p : %p\n", p);
	printf("the value of *(a + 1) : %d\n", *(a + 1));
	printf("the value of a + 1 : %p\n", a + 1);
	printf("======================================\n");
	*p = 98;
	printf("the value of *p : %d\n", *p);
	printf("the value of a[1] : %d\n", a[1]);
	printf("the value of a[0] : %d\n", a[0]);
	printf("the value of *a : %d\n", *a);
	printf("======================================\n");
	p2 = a + 3;
	printf("the value of p2 : %p\n", p2);
	printf("This should be the address of a[3]\n");
	printf("the address of a[3] = the value of *(a + 3)\n");
	printf("the value of *(a + 3) : %d\n", *(a + 3));
	printf("======================================\n");
	*p2 = *p + 1337;
	printf("the value of *p2 : %d\n", *p2);
	printf("the value of a[3] : %d\n", a[3]);
	return (0);
}
