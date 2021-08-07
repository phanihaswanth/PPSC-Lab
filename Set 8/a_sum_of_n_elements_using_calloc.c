//set 8 a) write a c program to find sum of n elements entered by user by using calloc() function
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n, i, *ptr, sum=0;
	printf("enter the number of elements: ");
	scanf("%d",&n);
	ptr = (int *)calloc(n,sizeof(int));
	if(ptr == NULL)
	{
		printf("error! memory not allocated.");
		exit(1);
	}
	printf("\nEnter the %d elements: ", n);
	for( i=0 ; i<n ; i++)
	{
		scanf("%d", ptr+i);
		sum+=*(ptr+i);
	}
	printf("The sum of %d elements is %d",n,sum);
	free(ptr);
}
