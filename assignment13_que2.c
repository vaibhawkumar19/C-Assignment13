//2. Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int odd(int);
int main()
{
	int n;
	printf("enter the number ");
	scanf("%d",&n);
	odd(n);
	printf("%d",odd(n));
}
int odd(int n)
{
	int num;
	while(n>0)
	{
		num=2*n-1+odd(n-1);
		return num;
	}
}
