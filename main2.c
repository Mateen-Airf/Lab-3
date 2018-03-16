#include<stdio.h>
#include"myFunc.h"
void main()
{
	char s[5]="dad";
	int r=isPalindrome(s,3);
	if(r==1)
	{
		printf("Palindrome\n");	
		printf("bye");
	}
	else
	{
	       printf("Not Palindrome\n");
	}		
}
