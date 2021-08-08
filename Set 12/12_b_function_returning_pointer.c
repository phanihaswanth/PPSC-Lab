// 12 b) write a c program to show a function returning pointer
#include<stdio.h>
int * findlarger(int*, int*);
void main()
{
	int numa, numb;
	int*  result;
	printf("enter two numbers: ");
	scanf("%d %d", &numa, &numb);
	result=findlarger(&numa, &numb);
	printf("\nThe number %d is larger",*result);
}

int* findlarger(int * n1, int *n2)
{
	if(*n1 > *n2)
		return n1;
	else
		return n2;	
}
