//4. Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int square(int);
int main()
{
	int n;
	printf("enter the number ");
	scanf("%d",&n);
	square(n);
	printf("%d",square(n));
}
int square(int n)
{
	int num;
	while(n>0)
	{
		num=n*n+square(n-1);
		return num;
	}
}
