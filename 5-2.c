//Assignment-5 Question-2

//Write a program which accept number from user and display its factors in decreasing order.

//i/p:	12
//o/p:	6 4 3  2 1

//i/p:	13
//o/p:	1

//i/p:	10
//o/p:	5 2 1

//----------------------------------------------------------------------------------------------------


#include<stdio.h>

void FactRev(int iNo)
{
	int iCnt=0;
	
	if(iNo<0)
	{
		iNo=-iNo;		//updater 
	}
	
	for(iCnt=(iNo/2);iCnt>=1;iCnt--)
	{
		if((iNo%iCnt)==0)
		{
			printf("%d\t",iCnt);
		}
	}

}

int  main()
{
	int iValue=0;
	
	printf("\nEnter the Number\n");
	scanf("%d",&iValue);
	
	FactRev(iValue);
	
	return 0;
}