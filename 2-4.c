//Assignment-2 Question-4

//Accept two numbers from user and display first number in second number of times.

//i/p: 12 5
//o/p: 12 12 12 12 12

//i/p: -2 3
//o/p: -2 -2 -2

//i/p: 21 -3
//o/p: 21 21 21

//i/p: -2 0
//o/p: 

//-----------------------------------------------------------------------------------------


#include<stdio.h>

void Display(int iNo,int iFrequency)
{
	int iCnt=0;
	
	if(iFrequency<0)
	{
		iFrequency=-iFrequency;
	}
	
	for(iCnt=1;iCnt<=iFrequency;iCnt++)
	{
		printf("%d\t",iNo);
	}
	
}

int main()
{
	int iValue=0,iCount=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	printf("Enter the frequency\n");
	scanf("%d",&iCount);
	
	Display(iValue,iCount);
	
	return 0;
}
