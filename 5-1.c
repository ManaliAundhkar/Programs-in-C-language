//Assignment-5 Question-1

//Write a program which accept number from user and display its multiplication of factors.

//i/p:	12
//o/p:	144(1*2*3*4*6)

//i/p:	13
//o/p:	1(1)

//i/p:	10
//o/p:	10(1*2*5)

//-------------------------------------------------------------------------------------------------------


#include<stdio.h>

int MultFact(int iNo)
{
	int iCnt=0,iMul=1;
	
	if(iNo<0)
	{
		iNo=-iNo;		//updater 
	}
	
	for(iCnt=1;iCnt<=(iNo/2);iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iMul=iMul*iCnt;
		}
	
	}
	return iMul;
}




int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("\nEnter the Number:\n");
	scanf("%d",&iValue);
	
	iRet=MultFact(iValue);
	
	printf("The Multiplication of factors is:%d",iRet);
	
	return 0;
}
