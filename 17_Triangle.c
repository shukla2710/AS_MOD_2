/*  Write a C program to check whether a triangle can be 
formed with the given values for the angles.  */

#include<stdio.h>

main()
{
		float a,b,c; 
		printf("\n\n\t Input three angles of triangle : "); 
		scanf("%f %f %f",&a,&b,&c); 
		if((a+b+c)==180) 
			printf("\n\n\t Triangle formed"); 
		else 
			printf("\n\n\t Triangle not formed"); 
}
