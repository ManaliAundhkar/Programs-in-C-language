//Write a program which accept number from user and display below pattern.

//Input : 5
//Output : * * * * * # # # # #

//Input : 6
//Output : * * * * * * # # # # # # #

//Input : -5
//Output : * * * * * # # # # #

//Input : 2
//Output : * * # #


#include<stdio.h>

void Display(int iNo)
{
	//Logic
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	if(iNo==0)
	{
		return;
	}
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("*\t");
	}
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("#\t");
	}
}

int main()
{
	int iValue=0;
	
	printf("\nEnter the Number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}




