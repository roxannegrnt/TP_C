#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	long n=15;
	long *p = &n;
	long **pp = &p;
	printf("La valeur de p: %p\n", p);
	printf("La valeur de pp: %p\n", pp);
	printf("La valeur de *p: %ld\n", *p);
	printf("La valeur de *pp: %p\n", *pp);
	printf("La valeur de **pp: %ld\n", **pp);
}