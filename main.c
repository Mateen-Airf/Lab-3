#include<stdio.h>
#include"myMath.h"
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
}
