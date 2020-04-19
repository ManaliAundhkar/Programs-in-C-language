//Assignment-1	Question-1

//Write a program to divide two numbers.

//-----------------------------------------------------------------------------------------------


#include<stdio.h>

int Divide(int iNo1,int iNo2)
{
	int iDiv=0;
	
	if(iNo2==0)
	{
		
		return -1;
	}
	
	iDiv=iNo1/iNo2;
	
	return iDiv;
	
}

	
int main()
{
	int iValue1=0,iValue2=0,iRet=0;
	
	printf("\nEnter the numerator\n",iValue1);
	scanf("%d",&iValue1);
	
	printf("\nEnter the denominator\n",iValue2);
	scanf("%d",&iValue2);
	
	iRet=Divide(iValue1,iValue2);
	
	if(iRet==-1)
	{
		printf("\nInvalid value of denominator\n");
	}
	else
	{
		printf("\nThe Division is as follows: %d\n",iRet);
	}
	
	
	return 0;
}
