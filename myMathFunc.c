#include<stdio.h>
int isEqual(int x,int y)
{
	int r;
	if(x==y)
	{
		r=1;	
	}
	else
	{
		r=-1;
	}
	return r;
}
void swap(int x,int y)
{
x=x+y;
y=x-y;
x=x-y;
	printf("After Swap first=%d \nSecond=%d\n",x,y);
}

