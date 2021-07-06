/*a) Write a program in C to sort elements of array in ascending order. */

#include<stdio.h>
void main()
{
	int arr[60],n,j,i,temp;
	printf("enter the size of an array:");
	scanf("%d",&n);
	printf("\n enter the %d elements of an array:",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("\n sorting elements of an array:");
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
}
