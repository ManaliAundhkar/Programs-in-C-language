//Assignment-6 Question-1

//Write a program which accept name from the user and print than name.

//Input:Manali Aundhkar.

//Output:Manali Aundhkar.

//-----------------------------------------------------------------------------------------


#include<stdio.h>

int main()
{
	char Name[30]={'\0'};
	
	printf("Enter the Full Name\n");
	scanf("%[^'\n']s",Name);	//Special scanf function used for accepting full name.
	
	printf("The Entered name is:%s",Name);
	
	return 0;
}
