//Assignment-1	Question-2

//Write a program to print 5 times "Marvellous" on screen.

//-----------------------------------------------------------------------------------------------


#include<stdio.h>


void Display(int iNo)
{
	int iCnt=0;
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("Marvellous\n");
	}
	
}
int main()
{
	int iValue=5;
	
	Display(iValue);
	
	return 0;
}