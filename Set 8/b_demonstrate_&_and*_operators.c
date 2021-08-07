// set 8 b) write a c program to demonstrate & and * operator
#include<stdio.h>
void main()
{
	int a=25;
	float b=35.53;
	int *pt1;
	float *pt2;
	pt1 = &a;
	pt2 = &b;
	printf("a = %d\n",a);
	printf("b = %f\n",b);
	printf("\nAddress of a = %x",&a);
	printf("\nAddress of b = %x",&b);
	printf("\nValue at address of a = %d",*(&a));
	printf("\nValue at address of b = %f",*(&b));
	printf("\nAddress of a = %x",pt1);
	printf("\nAddress of b = %x",pt2);
	printf("\nValue at address of a = %d",*pt1);
	printf("\nValue at address of b = %f",*pt2);
}
