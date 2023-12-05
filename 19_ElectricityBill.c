/*  Write a program in C to calculate and print the electricity bill 
of a given customer. The customer ID, name, and unit consumed by 
the user should be captured from the keyboard to display the 
total amount to be paid to the customer. The charge are as follow :


Unit                                     Charge/Unit
upto 350									@1.20
350 and above but less than 600             @1.50
600 and above but less than 800             @1.80
800 and above                               @2.00

If bill exceeds Rs. 800 then a surcharge of 18% will be charged 
and the minimum bill should be of Rs. 256/-         */

#include<stdio.h>

main()
{
	int C_ID, unit;
	char cname[30];
    float amt;

    printf("\n\n\t Input Customers' ID : ");
    scanf("%d",&C_ID);
    printf("\n\n\t Input Customers' Name : ");
    scanf("%s",&cname);
    printf("\n\n\t Input total units consumed : ");
    scanf("%d", &unit);	
    
    if(unit>=800)
    {
        amt = unit * 2.00;
    }
    
    else if(unit>=600)
    {
        amt = unit * 1.80;
    }
    
    else if(unit>=350)
    {
        amt = unit * 1.50;
    }
    
    else
    {
    	amt = unit * 1.20;
	}
	
	printf("\n\n\t Electricity Bill = Rs. %.2f", amt);
}

