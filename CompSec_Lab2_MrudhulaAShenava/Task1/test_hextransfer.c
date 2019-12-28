/* exploit.c  */

/* A program that creates a file containing code for launching shell*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void main()
{
	long n=(long )"0xbfffe9b8";
	printf("%u\t%x\t%li\t%X\n",n,n,n,n);
}

