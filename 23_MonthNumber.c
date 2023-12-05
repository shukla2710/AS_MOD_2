//Accept month number and display month name.

#include<stdio.h>

main()
{
		int mno;  

   		printf("\n\n\t Input Month No : ");  
   		scanf("%d",&mno);  

   		switch(mno)  
   		{
			case 1:
	       			printf("\n\n\t January\n");  
	       			break;
			case 2:
			       printf("\n\n\t February\n");  
			       break;
			case 3:
			       printf("\n\n\t March\n");  
			       break;
			case 4:
			       printf("\n\n\t April\n");  
			       break;
			case 5:
			       printf("\n\n\t May\n"); 
			       break;
			case 6:
			       printf("\n\n\t June\n");  
			       break;
			case 7:
			       printf("\n\n\t July\n"); 
			       break;
			case 8:
			       printf("\n\n\t August\n");  
			       break;
			case 9:
			       printf("\n\n\t September\n");   
			       break;
			case 10:
			       printf("\n\n\t October\n");  
			       break;
			case 11:
			       printf("\n\n\t November\n");   
			       break;
			case 12:
			       printf("\n\n\t December\n");  
			       break;
			default:
			       printf("\n\n\t Invalid Month number. Please try again ....");  // Print a message for an invalid input.
			       break;
      }


}
