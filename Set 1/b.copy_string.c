/*b) Write a program in C to copy one string to another string.*/
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20],str2[20];
	printf("enter any string: ");
	scanf("%[^\n]",str1);
	strcpy(str2,str1);
	printf("\nafter copying the context to str2 is : %s",str2);
}
