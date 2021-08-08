/*b) Write a program in C to compare two strings without using string library functions */

#include<stdio.h>
void main()
{
	char str1[20],str2[20];
	int i=0;
	printf("enter any two strings: ");
	gets(str1);
	gets(str2);
	while(str1[i]==str2[i]&&str1[i]!='\0')
		i++;
	if(str1[i]>str2[i])
		printf("str1 is greater than str2");
	else if(str1[i]<str2[i])
		printf("str1 is lesser than str2");	
	else
		printf("both strings are equal");		
}
