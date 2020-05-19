//Accept amount in US dollar and return its corresponding value in Indian currency.Consider 1$ as 70 rupees.

//Input : 10
//Output : 700

//Input  : 3
//Output : 270

//Input : 1200
//Output : 84000


#include<stdio.h>

int DollarToINR(int iNo)
{
	//Logic
	int iINR=0;
	
	if(iNo<=0)
	{
		printf("Invalid Input\n");
	}
	
	iINR=iNo*70;
	
	return iINR;
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("\nEnter value of USD\n");
	scanf("%d",&iValue);
	
	iRet = DollarToINR(iValue);
	
	printf("Value in INR is: %d",iRet);
	
	return 0;
}
