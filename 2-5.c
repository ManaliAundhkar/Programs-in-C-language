//Assignment-2 Question-5

//Accept number from user and check whether number is even or odd.

//-----------------------------------------------------------------------------------------


#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Display(int iNo)
{
	if((iNo%2)==0)
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
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	bRet=Display(iValue);
	
	if(bRet==TRUE)
	{
		printf("The entered number is even\n");
	}
	else
	{
		printf("The entered number is not even\n");
	}
	
	return 0;
} 