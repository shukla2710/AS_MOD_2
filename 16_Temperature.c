/*  Write a C program to read temperature in centigrade and 
display a suitable message according to the temperature state below: 
Temp < 0 then Freezing weather 
Temp 0-10 then Very Cold weather 
Temp 10-20 then Cold weather 
Temp 20-30 then Normal in Temp 
Temp 30-40 then Its Hot Temp >=40 then Its Very Hot   */

#include<stdio.h>

main()
{
	int Temp;
	
	printf("\n\n\t Input a temperature value : ");
	scanf("%d",&Temp);
	
	if(Temp>=40)
		printf("\n\n\t Very Hot..");
		
	else if(Temp>=30 && Temp<40)
		printf("\n\n\t Its Hot..");
		
	else if(Temp>=20 && Temp<30)
		printf("\n\n\t Normal Temp..");
		
	else if(Temp>=10 && Temp<20)
		printf("\n\n\t Very Cold Weather..");
		
	else
		printf("\n\n\t Freezing Weather..");
}
