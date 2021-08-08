#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="sum = sum + 10;";
	char * token=strtok(str," ;");
	int count=0;
	while(token != NULL)
	{
		count++;
		printf("token %2d contains %s\n",count,token);
		token=strtok(NULL," ;");
	}
}
