//Accept the input month number and print number of days in that month.

#include<stdio.h>

main()
{
	int N;
	
	printf("\n\n\t Input a Month in Integer : ");
	scanf("%d",&N);
	
	if (N == 1 || N == 3 || N == 5 || N == 7 || N == 8 || N == 10 || N == 12) 
	{ 
        printf("\n\n\t 31 Days"); 
    } 
    
    else if (N == 4 || N == 6 || N == 9 || N == 11) 
	{ 
        printf("\n\n\t 30 Days"); 
    } 
    
    else if (N == 2) 
	{ 
        printf("\n\n\t 28/29 Days"); 
    } 
    
    else 
	{ 
        printf("\n\n\t Invalid Month."); 
    } 
}
