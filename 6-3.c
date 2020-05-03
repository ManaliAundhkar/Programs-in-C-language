//Assignment-6 Question-3

//Write a program which accept two numbers from user and check whether that numbers are equal or not.

//Input:10 10
//Output:Equal.

//Input:10 12
//Output:Not Equal.

//Input:10 -10
//Output:Not Equal.

//-----------------------------------------------------------------------------------------


#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1,int iNo2)
{
	if(iNo1==iNo2)
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
	int iValue1=0,iValue2=0;
	BOOL bRet=FALSE;

	printf("Enter the 1st number:\n");
	scanf("%d",&iValue1);
	
	printf("Enter the 2nd number:\n");
	scanf("%d",&iValue2);
	
	bRet=ChkEqual(iValue1,iValue2);
	
	if(bRet==TRUE)
	{
		printf("Equal\n");
	}
	else
	{
		printf("Not Equal\n");
	}
	
	return 0;	
}