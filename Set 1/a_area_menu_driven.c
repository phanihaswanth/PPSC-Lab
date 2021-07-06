/*a)  Write a program in C which is a Menu-Driven Program to compute the area of the various geometrical shape.*/

#include<stdio.h>
void main()
{
	int choices,r,l,b,s,h,w;
	float area;
	printf("enter the 1 of area of circle:\n");
	printf("enter the 2 of area of rectangle:\n");
    printf("enter the 3 of area of square:\n");
    printf("enter the 4 of area of triangle:\n");
    printf("enter the choices:\n");
    scanf("%d",&choices);
    switch(choices)
    {
    	case 1:
    		printf("enter the radius of circle:\n");
    		scanf("%d",&r);
    		area=3.14*r*r;
    		break;
    	case 2:
		    printf("enter the length and width of rectangle:\n");
		  	scanf("%d%d",&l,&w);
	  		area=l*w;
	  		break;
		case 3:
		    printf("enter the side of the square:\n");
		  	scanf("%d",&s);
		  	area=s*s;
		  	break;
		case 4:
		    printf("enter the base and height of triangle:\n ");
			  scanf("%d%d",&b,&h);
			  area=0.5*b*h;
			  break;		
	}
	{
		printf("the area is %f",area);
	}
}
