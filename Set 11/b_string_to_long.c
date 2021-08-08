/* Demonstare string to long function */
#include<stdio.h>
#include<string.h>
void main()
{
	long num;
	char * ptr;
	
	num=strtol("12345 Decimal constant: ", &ptr, 0);
	printf("%s %ld\n",ptr,num);
	
	num=strtol("11001 Binary constant: ", &ptr, 2);
	printf("%s %ld\n",ptr,num);
	
	num=strtol("13572 Octal constant: ", &ptr, 8);
	printf("%s %ld\n",ptr,num);
	
	num=strtol("7abc Hex constant: ", &ptr, 16);
	printf("%s %ld\n",ptr,num);
}
