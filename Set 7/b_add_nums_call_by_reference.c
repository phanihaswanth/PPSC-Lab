//set 7 b) write a c program to add two numbers using call by reference
#include<stdio.h>
int addnums(int *, int *);
void main()
{
	int fno, sno, sum;
	printf("enter any two numbers: ");
	scanf("%d %d",&fno, &sno);
	sum=addnums(&fno, &sno);
	printf("The sum of %d and %d is %d",fno,sno,sum);
}
int addnums(int *a, int *b)
{
	int sum;
	sum = *a + *b;
	return sum;
}
