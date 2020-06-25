//Write a program which accept temperature in Fahrenheit and convert it into Celsius. (1 Celsius = (Fahrenheit -32) * (5/9))

//Input : 10
//Output : -12.2222 (10 - 32) * (5/9)

//Input : 34
//Output : 1.11111 (34 - 32) * (5/9)

#include<stdio.h>

double FhtoCs(float fTemp)
{
	// Logic
	double CsTemp=0.0;
	
	CsTemp=(fTemp -32)*(0.555555);
	
	return CsTemp;
	
}

int main()
{
	float fValue=0.0;
	double dRet=0.0;
	
	printf("\nEnter the temperature in Fahrenheit\n");
	scanf("%f",&fValue);
	
	dRet=FhtoCs(fValue);
	
	printf("The temperature in Celsius is: %0.4lf",dRet);
	
	return 0;
}


