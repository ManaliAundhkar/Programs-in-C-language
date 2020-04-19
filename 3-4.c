//Assignment-3 Question-4

//Accept one character from user and convert case of that character.

//i/p:	a
//o/p:	A

//i/p:	D
//o/p:	d

//--------------------------------------------------------------------------------------------------------

#include<stdio.h>

void DisplayConvert(char ch)
{
	if((ch>='a')&&(ch<='z'))
	{
		ch=ch-32;
		printf("%c",ch);
	}
	else if((ch>='A')&&(ch<='Z'))
	{
		ch=ch+32;
		printf("%c",ch);
	}	
}
int main()
{
	char cValue='\0';
	
	printf("\nEnter the Character\n");
	scanf("%c",&cValue);
	
	DisplayConvert(cValue);

	return 0;	
}