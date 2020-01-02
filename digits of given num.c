// wap to accept and find out the  no of digits in number and return it
#include<stdio.h>
int main()
{
	int number;
	int n,i,c=0;
	printf("enter a number");
	scanf("%d",&n);
	while(n>0)
	{
		n=n/10;
		c++;
	}
	printf("no of digits=%d",c);
}
