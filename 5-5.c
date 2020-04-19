//Assignment-5 Question-4

//Write a program which accept number from user and return summation of all its non-factors.

//i/p:	12
//o/p:	-37 (16-50)

//i/p:	10
//o/p:	-29 (8-37)

//-------------------------------------------------------------------------------------------------------


#include<stdio.h>

int FactDiff(int iNo)
{
	int iCnt=0,iDiff=0,iFact=0,iNonFact=0;
	
	if(iNo<0)
	{
		iNo=-iNo;		//updater 
	}
	
	for(iCnt=1;iCnt < iNo;iCnt++)		//1 2 3 4 5 6 7 8 9 10 11 12
	{
		if((iNo%iCnt)==0)
		{
			iFact=iFact+iCnt;		//1 3 6 10 16
		}
		else
		{
			iNonFact=iNonFact+iCnt;			//5 12 20 29 39 50
		}
	}
	iDiff=iFact-iNonFact;
	return iDiff;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("\nEnter the Number:\n");
	scanf("%d",&iValue);
	
	iRet=FactDiff(iValue);
	
	printf("The Difference between summation of all its factors and non-factors is: %d",iRet);
	
	return 0;
}
