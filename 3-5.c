//Assignment-3 Question-4

//Accept one character from user and check whether that character is vowel(a,e,i,o,u) or not.

//i/p:	E
//o/p:	TRUE

//i/p:	d
//o/p:	FALSE

//--------------------------------------------------------------------------------------------------------

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char ch)
{
	if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
	{
		return TRUE;
	}
	else 
	{
		return FALSE;
	}	
}
int main()
{
	char cValue='\0';
	BOOL bRet=FALSE;
	
	printf("\nEnter the Character\n");
	scanf("%c",&cValue);
	
	bRet=ChkVowel(cValue);
	
	if(bRet==TRUE)
	{
		printf("The character is a VOWEL");
	}
	else
	{
		printf("The character is a not a VOWEL");
	}

	return 0;	
}