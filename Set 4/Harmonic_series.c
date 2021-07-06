/*b) Write a program in C to display the n terms of harmonic series and their sum. 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms.*/
#include<stdio.h>
#include<math.h>
void main()
{
	int i,n;
	float sum=1.0;
	printf("enter the number of harmonic series:");
	scanf("%d",&n);
	printf("\n the harmonic series %d is 1",n);
	for(i=2;i<=n;i++)
	{
		printf(" + 1/%d ",i);
		sum=sum+1.0/i;
	}
	printf("\nthe sum of harmonic series of %d is %f",n,sum);
}
