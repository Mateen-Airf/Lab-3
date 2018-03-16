#include<stdio.h>
#include"myMath.h"
#include"myFunc.h"
void main()
{
        int x,y;
	printf("Enter 1st number: ");
	scanf("%d",&x);
	printf("Enter 2nd number: ");
	scanf("%d",&y);
	int a1=isEqual(x,y);
	if(a1==1)
	{
		printf("Equal\n");
	}
	else
	{
		printf("Not Eqaul\n");
	}
	swap(x,y);

		char s[5]="dad";
	int r=isPalindrome(s,3);
	if(r==1)
	{
		printf("Palindrome\n");	
	}
	else
	{
	       printf("Not Palindrome\n");
	}	


}
