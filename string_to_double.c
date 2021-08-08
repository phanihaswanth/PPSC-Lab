/* Demonstare string to double function */
#include<stdio.h>
#include<stdlib.h>
void main()
{
	double num;
	char* ptr;
	num=strtod("12.345 floating-point constant: ", &ptr);
	printf("%s %f\n",ptr,num);
	num=strtod("11.254e6 floating-point constant scientific notation: ",&ptr);
	printf("%s %f\n",ptr,num);
}
