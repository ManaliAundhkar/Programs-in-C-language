//Write a program to find factorial of given number.

//Input : 5
//Output : 120 (5 * 4 * 3 * 2 * 1)

//Input : -5
//Output : 120 (5 * 4 * 3 * 2 * 1)

//Input : 4
//Output : 24 (4 * 3 * 2 * 1)


#include<stdio.h>

int Factorial(int iNo)
{
	//Logic
	int iFact=1,iCnt=0;
	
	if(iNo<0)
	{
		iNo=-iNo;	//Updater
	}
	
	if(iNo==0)
	{
		return iFact;
	}
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		iFact=iFact*iCnt;
	}
	return iFact;
}

int main()
{
	int iValue=0,iRet=0;
	
	printf("\nEnter the Number\n");
	scanf("%d",&iValue);
	
	iRet=Factorial(iValue);
	
	printf("The Factorial of number is: %d",iRet);
	
	return 0;
}
