//12 a) write a C program to display the n terms of even natural numbers and their sum
#include<stdio.h>
void main()
{
	int i, n, sum=0;
	printf("enter the number of terms: ");
	scanf("%d",&n);
	printf("\nThe even numbers are: ");
	for(i=1 ; i<=n ; i++)
	{
		printf("\n%d",2*i);
		sum+=2*i;
	}
	printf("\nThe sum of %d terms of even natural numbers is %d",n,sum);
}
