//9 a) write a c program to find the largest element using dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, n, *ptr;
	printf("enter the number of elements: ");
	scanf("%d", &n);
	ptr=(int *)malloc(n * sizeof(int));
	if(ptr == NULL)
	{
		printf("No Memory is allocated! ");
		exit(1);
	}
	printf("Enter the %d elements: ",n);
	for( i=0 ; i<n ; i++)
		scanf("%d", ptr+i);
	for( i=0 ; i<n ; i++)
	{
		if(*ptr < *(ptr+i))
			*ptr = *(ptr + i);
	}	
	printf("\nThe Largest Element is : %d", *ptr);	
}
