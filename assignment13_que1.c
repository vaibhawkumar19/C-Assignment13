//1. Write a recursive function to calculate sum of first N natural numbers
#include<stdio.h>
int Nnetural(int);
int main()
{
	int n;
	printf("enter the number ");
	scanf("%d",&n);
	Nnetural(n);
	printf("%d",Nnetural(n));
}
int Nnetural(int n)
{
	int num;
	while(n>0)
	{
		num=n+Nnetural(n-1);
		return num;
	}
}
