/*a) Write a program in C to find transpose of a given matrix.*/

#include<stdio.h>
void main()
{
	int n,i,j;
	printf("enter the size of array: ");
	scanf("%d",&n);
	int a[n][n],b[n][n];
	printf("enter the matrix A values: \n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	printf("\n The Transpose of matrix A is : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[j][i];
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}				
}
