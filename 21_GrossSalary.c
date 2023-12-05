/*  Write a C program to input basic salary of an employee 
and calculate its Gross salary according to following: 

Basic Salary <= 10000 : HRA = 20%, DA = 80% 
Basic Salary <= 20000 : HRA = 25%, DA = 90% 
Basic Salary > 20000 : HRA = 30%, DA = 95%        */

#include<stdio.h>

main()
{
	float basic, da, hra, gross_salary;
	
	printf("\n\n\t Input the Basic Salary of an employee : ");
    scanf("%f",&basic);
    
    if (basic>20000)
	{
        da=(basic * 95) / 100;
        hra=(basic * 30) / 100;
    }
    
    if (basic<=20000)
	{
        da=(basic * 90) / 100;
        hra=(basic * 25) / 100;
    }
    
    if (basic<=10000)
	{
        da=(basic * 80) / 100;
        hra=(basic * 20) / 100;
    }
    
    gross_salary=basic+da+hra;
    
    printf("\n\n\t Gross salary of employee: %.2f", gross_salary);
    
}
