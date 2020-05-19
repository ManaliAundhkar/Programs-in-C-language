//Write a program to find even factorial of given number.

//Input : 5
//Output : 8 (4 * 2)

//Input : -5
//Output : 8 (4 * 2)

//Input : 10
//Output : 3840 (10 * 8 * 6 * 4 * 2)


#include<stdio.h>

int EvenFactorial(int iNo)
{
	int iEvenFact=1,iCnt=0;

	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
		if((iCnt%2)==0)
		{
			iEvenFact=iEvenFact*iCnt;
		}
	}
	return iEvenFact;
}

int main()
{
	int iValue=0,iRet=0;
	
	printf("\nEnter the number\n");
	scanf("%d",&iValue);
	
	iRet=EvenFactorial(iValue);
	printf("The Even Factorial is:	%d \n",iRet);
	
	return 0;
}

