//Accept single digit number from user and print it into word.

//Input : 9
//Output : Nine

//Input : -3
//Output : Three

//Input : 12
//Output : Invalid Number


#include<stdio.h>

void Display(int iNo)
{
	// Logic
	if(iNo<0)
	{
		iNo=-iNo;	//Updater
	}
	
	if(iNo==0)
	{
		printf("Zero\n");
	}
	else if(iNo==1)
	{
		printf("One\n");
	}
	else if(iNo==2)
	{
		printf("Two\n");
	}
	else if(iNo==3)
	{
		printf("Three\n");
	}
	else if(iNo==9)
	{
		printf("Nine\n");
	}
	else if(iNo>=10)
	{
		printf("Invalid Input\n");
	}
}
int main()
{
	int iValue = 0;
	
	printf("\nEnter number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}
