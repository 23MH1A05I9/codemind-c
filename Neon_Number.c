#include<stdio.h>
int main()
{
	int i,r,n,sq,sum=0;
	scanf("%d",&n);
	sq=n*n;
	while(sq!=0)
	{
		r=sq%10;
		sum=sum+r;
		sq=sq/10;
	}
	if(sum==n)
	{
		printf("Neon Number");
	}
	else
	{
		printf("Not Neon Number");
	}
}