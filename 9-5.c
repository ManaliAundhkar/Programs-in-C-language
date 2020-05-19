//Write a program which returns difference between Even factorial and odd factorial of given number.

//Input : 5
//Output : -7 (8 - 15)

//Input : -5
//Output : -7 (8 - 15)

//Input : 10
//Output : 2895 (3840 - 945)


#include<stdio.h>

int FactorialDiff(int iNo)
{
	//Logic
	int iCnt=0,iEvenFact=1,iOddFact=1,iDiffFact=0;
	
	if(iNo<0)
	{
		iNo=-iNo;	//Updater
	}
	
	if(iNo==0)
	{
		iOddFact=0;
	}
	
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
		if((iCnt%2)==0)
		{
			iEvenFact = iEvenFact*iCnt;
		}
		else
		{
			iOddFact = iOddFact*iCnt;
		}		
	}
		
	iDiffFact=iEvenFact-iOddFact;
	
	return iDiffFact;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("\nEnter the number:\n");
	scanf("%d",&iValue);
	
	iRet=FactorialDiff(iValue);
	
	printf("The Difference between Even factorial and Odd factorial is: %d \n",iRet);
	
	return 0;
}

