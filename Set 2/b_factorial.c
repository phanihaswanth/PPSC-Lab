// set 2 b) write a c program to find the factorial of a number
#include<stdio.h>
void main()
{
	int i, fact=1, num;
	printf("enter the number: ");
	scanf("%d",&num);
	for( i=1 ; i<=num ; i++)
		fact=fact*i;
	printf("\nThe factorial of %d is : %d\n",num,fact);	
}
