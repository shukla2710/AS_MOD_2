/* Write a C program to input electricity unit charges and 
calculate total electricity bill according to the given condition: 
For first 50 units Rs. 0.50/unit 
For next 100 units Rs. 0.75/unit 
For next 100 units Rs. 1.20/unit 
For unit above 250 Rs. 1.50/unit 
An additional surcharge of 20% is added to the bill.   */

#include<stdio.h>
main()
{
	int unit;
    float amt;

    printf("\n\n\t Input total units consumed : ");
    scanf("%d", &unit);	
    
    if(unit>=250)
    {
        amt = unit * 1.50;
    }
    
    else if(unit>=150)
    {
        amt = unit * 1.20;
    }
    
    else if(unit>=100)
    {
        amt = unit * 0.75;
    }
    
    else
    {
    	amt = unit * 0.50;
	}
	
	printf("\n\n\t Electricity Bill = Rs. %.2f", amt);
}
