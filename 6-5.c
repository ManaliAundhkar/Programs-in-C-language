//Assignment-6 Question-5

//Write a program which accept total marks and obtained marks from user and calculate percentage.

//Input:1000 745
//Output:74.5%

//-----------------------------------------------------------------------------------------


#include<stdio.h>

float CalcPercent(float iTotal,float iObt)
{
	float fPercent=0.0;
	
	if(((iTotal==0)&&(iObt==0))||(iTotal==0)||(iObt==0))
	{
		printf("Invalid input\n");
		return -1;
	}
	
	fPercent=(iObt*100)/iTotal;
	
	return fPercent;
}
int main()
{
	float iTotal=0.0,iObt=0.0;
	float fPercent=0.0;
	
	printf("Enter the Total marks:\n");
	scanf("%d",&iTotal);
	
	printf("Enter the Obtained marks:\n");
	scanf("%d",&iObt);
	
	fPercent=CalcPercent(iTotal,iObt);
	
	printf("The calculated percentage are %f:",fPercent);
	
	return 0;
	
}