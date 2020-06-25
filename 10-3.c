//Write a program which accept distance in kilometre and convert it into meter. (1 kilometer = 1000 Meter)

//Input : 5
//Output : 5000

//Input : 12
//Output : 12000

//-------------------------------------------------------------------------------------------------------------------

#include<stdio.h>

int KMtoMeter(int iNo)
{
	// Logic
	iNo=iNo*1000;
	
	return iNo;
}

int main()
{
	int iValue=0,iRet=0;
	
	printf("\nEnter Distance\n");
	scanf("%d",&iValue);
	
	iRet=KMtoMeter(iValue);
	
	printf("The distance in meter is: %d\n",iRet);
	
	return 0;
}