//Assignment-5 Question-4

//Write a program which accept number from user and return summation of all its non-factors.

//i/p:	12
//o/p:	50 (5+7+8+9+10+11)

//i/p:	10
//o/p:	37 (3+4+6+7+8+9)

//-------------------------------------------------------------------------------------------------------


#include<stdio.h>

int SumNonFact(int iNo)
{
	int iCnt=0,iSum=0;
	
	if(iNo<0)
	{
		iNo=-iNo;		//updater 
	}
	
	for(iCnt=1;iCnt < iNo;iCnt++)
	{
		if((iNo%iCnt)!=0)
		{
			iSum=iSum+iCnt;
		}
	}
	return iSum;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("\nEnter the Number:\n");
	scanf("%d",&iValue);
	
	iRet=SumNonFact(iValue);
	
	printf("The Summation of all non-factors of a number is: %d",iRet);
	
	return 0;
}
