//5. Write a recursive function to calculate sum of digits of a given number
// test case : n=123=1+2+3=6
#include<stdio.h>
int sum_of_digit(int );
int main()
{
	int n;
	printf("enter the number ");
	scanf("%d",&n);
	sum_of_digit(n);
	printf("%d",sum_of_digit(n));
}
int sum_of_digit(int n)
{
	int num,r;
	while(n>0)
	{
		r=n%10;
		num=r+sum_of_digit(n/10);
		return num;
	}
}
