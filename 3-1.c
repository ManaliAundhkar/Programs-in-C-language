//Assignment-3 Question-1

//Write a program which accept one number from user and print that number of even numbers on screen.

//i/p:	7
//o/p:	2 4 6 8 10 12 14

//---------------------------------------------------------------------------------------------------------


#include<stdio.h>

void printEven(int iNo)
{
	int iCnt=0;
	
	if(iNo<=0)				//Updater
	{
		return;
	}
	
	for(iCnt=2;iCnt<=(iNo*2);iCnt++)
	{
		if((iCnt%2)==0)
		{
			printf("%d\t",iCnt);
		}
	}
}

int main()
{
	int iValue=0;
	
	printf("\nEnter the number\n");
	scanf("%d",&iValue);
	
	printEven(iValue);
	
	return 0;
}
