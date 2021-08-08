// 10 a) write a c program to swap elements using call by reference
#include<stdio.h>
void swapnumbers(int*, int*);
int main()
{
	int a,b;
	printf("enter any two numbers: ");
	scanf("%d %d", &a, &b);
	printf("\nThe values before swapping are: ");
	printf("\nElement1 = %d \nElement2 = %d",a,b);
	swapnumbers(&a, &b);
	printf("\nThe values after swapping are: ");
	printf("\nElement1 = %d \nElement2 = %d",a,b);
	return 0;
}

void swapnumbers(int* p, int *q)
{
	int temp;
	temp = *q;
	*q = *p;
	*p =  temp;
}
