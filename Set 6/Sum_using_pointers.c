/* b) Write a program in C to add two numbers using pointers. */

#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a, b;
    int *p=&a, *q=&b;
    printf("enter any two numbers: ");
    scanf("%d %d",p,q);
    printf("sum of two numbers is %d",*p+*q);
}
