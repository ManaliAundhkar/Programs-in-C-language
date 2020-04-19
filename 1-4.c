//Assignment-1	Question-4

//Accept one number and check whether it is divisible by 5 or not.

//-----------------------------------------------------------------------------------------------

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkWhether(int iNo)
{
	if((iNo%5)==0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
	
}



int main()
{
	int iValue=0;
	BOOL bRet=FALSE;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	bRet=ChkWhether(iValue);
	
	if(bRet==TRUE)
	{
		printf("The no. is divisible by 5");
	}
	else
	{
		printf("The no. is not divisible by 5");
	}
	
	return 0;
	
}