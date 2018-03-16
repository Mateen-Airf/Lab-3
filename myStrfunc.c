#include<stdio.h>
int isPalindrome(char *arr,int size)
{
	int i,r=1;
	
	for(i=0;i<size;i++)
	{
		if(arr[i]==arr[size-1])
		{
			size--;
	printf("bye");
		}
		else
		{
			r=-1;

		}
	}
	return r;

}
