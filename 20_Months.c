/*  Write a program in C to read any Month Number in integer and 
display the number of days for this month.   */

#include<stdio.h>

main()
{
	int mno;  
   char monnm[15];  

   printf("\n\n\t Input Month No : ");  
   scanf("%d",&mno);  

   switch(mno)  
   {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
	       			printf("\n\n\t Month have 31 days. ");  
	       			break;
		case 2:
	       			printf("\n\n\t The 2nd month is a February and have 28 days. ");  
	       			printf("\n\n\t in leap year The February month  have 29 days.");         
		   			break;
		case 4:
		case 6:
		case 9:
		case 11:
	       			printf("\n\n\t Month have 30 days. ");  
	       			break;
	default:
	       printf("\n\n\t Invalid Month number. Please try again ....");  
	       break;
      }
}
