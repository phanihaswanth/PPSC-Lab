/*b) Write a program in C to count the number of vowels and consonants in a string using a pointer */

#include <stdio.h>
int main()
{
	char str[50];
	char *ptr = str;
	int v=0,c=0,s=0;
	printf("enter a string: ");
	scanf("%[^\n]",str);
	while(*ptr != '\0')
	{
		if(*ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'||*ptr=='U'||*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u')
		v++;
		else if(*ptr==' ')
		s++;
		else
		c++;
		ptr++;
	}
	printf("\n Number of vowels: %d \n Number of consonants: %d",v,c);
}
