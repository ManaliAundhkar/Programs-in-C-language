//Assignment-3 Question-3

//Write a program which accept one number from user and print even factors of that number on screen.

//i/p:	36
//o/p:	2 4 6 12 18

//--------------------------------------------------------------------------------------------------------


#include<stdio.h>

void printEven(int iNo)
{
	int iCnt=0;
	
	if(iNo<0)				//Updater
	{
		iNo=-iNo;
	}
	
	for(iCnt=1;iCnt<=(iNo/2);iCnt++)
	{
		if(((iCnt%2)==0)&&((iNo%iCnt)==0))
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
