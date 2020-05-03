//Assignment-6 Question-4

//Write a program which accept three numbers from user and print its multiplication.

//Input:5 4 7
//Output:140

//Input:5 0 7
//Output:35

//Input:5 0 0
//Output:5

//Input:0 0 0
//Output:0

//-----------------------------------------------------------------------------------------


#include<stdio.h>

int Multiply(int iNo1,int iNo2,int iNo3)
{
	int iMult=0;
	
	if((iNo1==0)&&(iNo2==0)&&(iNo3==0))
	{
		return iMult;
	}
	
	if((iNo1!=0)&&(iNo2!=0)&&(iNo3!=0))
	{
		iMult=iNo1*iNo2*iNo3;
		return iMult;
	}
	
	if((iNo1!=0)||(iNo2!=0)||(iNo3!=0))
	{
		if((iNo1==0)&&((iNo2!=0)&&(iNo3!=0)))
		{
			iMult=iNo2*iNo3;
			return iMult;
		}
		else if((iNo2==0)&&((iNo1!=0)&&(iNo3!=0)))
		{
			iMult=iNo1*iNo3;
			return iMult;
		}
		else if((iNo3==0)&&((iNo1!=0)&&(iNo2!=0)))
		{
			iMult=iNo1*iNo2;
			return iMult;
		}
		else if((iNo1!=0)&&((iNo2==0)&&(iNo3==0)))
		{
			iMult=iNo1;
			return iMult;
		}
		else if((iNo2!=0)&&((iNo1==0)&&(iNo3==0)))
		{
			iMult=iNo2;
			return iMult;
		}
		else if((iNo3!=0)&&((iNo2==0)&&(iNo3==0)))
		{
			iMult=iNo3;
			return iMult;
		}
	}
}

int main()
{
	int iValue1=0,iValue2=0,iValue3=0;
	int iRet=0;
	
	printf("Enter the 1st number:\n");
	scanf("%d",&iValue1);
	
	printf("Enter the 2nd number:\n");
	scanf("%d",&iValue2);
	
	printf("Enter the 3rd number:\n");
	scanf("%d",&iValue3);
	
	iRet=Multiply(iValue1,iValue2,iValue3);
	
	printf("The multiplication of 3 numbers is: %d",iRet);
	
	return 0;
}
