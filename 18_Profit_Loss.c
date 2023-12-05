//Write a C program to calculate profit and loss on a transaction.

#include<stdio.h>

main()
{
	int cprice, sprice, plamt;  

    printf("\n\n\t Input Cost Price: ");  
    scanf("%d", &cprice);  
    printf("\n\n\t Input Selling Price: ");  
    scanf("%d", &sprice);  

    if(sprice>cprice)  
    {  
        plamt=sprice-cprice;  
        printf("\n\n\t profit amount : %d", plamt);  
    }  
    else if(cprice>sprice)  
    {  
        plamt=cprice-sprice;  // Calculate loss amount.
        printf("\n\n\t loss of amount : %d", plamt);  // Print loss message.
    }  
    else  // neither profit nor loss.
    {  
        printf("\n\n\t no profit, no loss condition.");    
	}  
    
}
