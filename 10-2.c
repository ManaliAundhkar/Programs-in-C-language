//Write a program which accept width & height of rectangle from user and calculate its area. (Area = Width * Height)

//Input : 5.3  9.78
//Output : 51.834

//-------------------------------------------------------------------------------------------------------------------

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
	// Logic
	double rArea=0.0;
	
	rArea=fWidth*fHeight;
	
	return rArea;
}

int main()
{
	float fValue1=0.0,fValue2=0.0;
	double dRet=0.0;
	
	printf("\nEnter the Width\n");
	scanf("%f",&fValue1);
	
	printf("\nEnter the Height\n");
	scanf("%f",&fValue2);
	
	dRet=RectArea(fValue1,fValue2);
	
	printf("\nThe Area of Rectangle is: %0.3lf",dRet);
	
	return 0;
}