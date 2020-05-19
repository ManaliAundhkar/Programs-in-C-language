//Write a program to find odd factorial of given number.

//Input : 5
//Output : 15 (5 * 3 * 1)

//Input : -5
//Output : 15 (5 * 3 * 1)

//Input : 10 
//Output : 945 (9 * 7 * 5 * 3 * 1)


#include<stdio.h>

int OddFactorial(int iNo)
{
	int iOddFact=0,iCnt=0;
	
	if(iNo==0)
	{
		return iOddFact;
	}
	
	iOddFact=1;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
		if((iCnt%2)!=0)
		{
			iOddFact=iOddFact*iCnt;
		}
	}
	return iOddFact;
}

int main()
{
	int iValue=0,iRet=0;
	
	printf("\nEnter the number\n");
	scanf("%d",&iValue);
	
	iRet=OddFactorial(iValue);
	printf("The Odd Factorial is:	%d \n",iRet);
	
	return 0;
}




