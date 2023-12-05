/* Write a C program to determine eligibility for admission to a 
professional course based on the following criteria Eligibility Criteria : 

Marks in Maths >=65 and 
Marks in Phy >=55 and 
Marks in Chem>=50 and 
Total in all three subject >=190 or 
Total in Maths and Physics >=140 ------------------------------------- 
Input the marks obtained in Physics :65 
Input the marks obtained in Chemistry :51 
Input the marks obtained in Mathematics :72 
Total marks of Maths, Physics and Chemistry : 188 
Total marks of Maths and Physics : 137 The candidate is not eligible.  */

#include<stdio.h>

main()
{
	int maths, phy, chem, t2, t3;
	
	printf("\n\n\t Input Marks for Maths (>=65) : ");
	scanf("%d",&maths);
	printf("\n\n\t Input Marks for Physics (>=55) : ");
	scanf("%d",&phy);
	printf("\n\n\t Input Marks for Chemestry (>=50) : ");
	scanf("%d",&chem);
	
	t3=maths+phy+chem;
	printf("\n\n\t Got the 3 subjects total : %d",t3);
	
	t2=maths+phy;
	printf("\n\n\t Got the 2 subjects total : %d",t2);
	
	if(maths>=65 && phy>=55 && chem>=50 && t3>=188 && t2>=137)
		printf("\n\n\t Candidate is eligible...");
		
	else
		printf("\n\n\t Candidate is not eligible...");	
}
