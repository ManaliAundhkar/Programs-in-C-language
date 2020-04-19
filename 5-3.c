//Assignment-5 Question-3

//Write a program which accept number from user and display all its non-factors.

//i/p:	12
//o/p:	5 7 8 9 10 11

//i/p:	13
//o/p:	2 3 4 5 6 7 8 9 10 11 12

//i/p:	10
//o/p:	3 4 6 7 8 9

//-------------------------------------------------------------------------------------------------------


#include<stdio.h>

void NonFact(int iNo)
{
	int iCnt=0;
	
	if(iNo<0)
	{
		iNo=-iNo;		//updater 
	}
	
	for(iCnt=1;iCnt < iNo;iCnt++)
	{
		if((iNo%iCnt)!=0)
		{
			printf("%d\t",iCnt);
		}
	
	}
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("\nEnter the Number:\n");
	scanf("%d",&iValue);
	
	NonFact(iValue);
	
	return 0;
}
