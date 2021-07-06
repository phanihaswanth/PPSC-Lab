/*a) Write a C program to check whether a given number is an Armstrong number or not.*/

#include<stdio.h>
#include<math.h>
void main()
{
	int num,r,temp,sum=0,ab,count=0;
	printf("enter a number: ");
	scanf("%d",&num);
	temp=num;
	ab=num;
	while(num!=0)
	{
		num=num/10;
		count++;
	}
	for(;ab!=0;ab=ab/10)
	{
		r=ab%10;
		sum=sum+pow(r,count);
	}
	if(sum==temp)
		printf("%d is an armstrong number",temp);
	else
		printf("%d is not an armstrong number",temp);	
}
