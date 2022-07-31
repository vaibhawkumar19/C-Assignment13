//8. Write a recursive function to print first N terms of Fibonacci series
#include<stdio.h>
int fact(int);
int main()
{
	int n,i;
	printf("enter the number to find Nth number of factorial ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	printf("%d",fact(i));
	return 0;
}
int fact(int n)
{
	if(n == 0 || n == 1)
		return n;
		return fact(n-1)+fact(n-2);
}
