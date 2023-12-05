//WAP to find the largest of three numbers.

#include<stdio.h>

main()
{
	int n1, n2, n3;
	
	printf("\n\n\t Input a Number1 : ");
	scanf("%d",&n1);
	
	printf("\n\n\t Input a Number2 : ");
	scanf("%d",&n2);
	
	printf("\n\n\t Input a Number3 : ");
	scanf("%d",&n3);
	
	if(n1>n2 && n1>n3)
		printf("\n\n\t Number1 %d is largest...",n1);
		
	else if(n2>n1 && n2>n3)
		printf("\n\n\t Number2 %d is largest...",n2);
		
	else
		printf("\n\n\t Number3 %d is largest...",n3);
}

