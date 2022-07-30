//3. Write a recursive function to calculate sum of first N even natural numbers
#include<stdio.h>
int even(int);
int main()
{
	int n;
	printf("enter the number ");
	scanf("%d",&n);
	even(n);
	printf("%d",even(n));
}
int even(int n)
{
	int num;
	while(n>0)
	{
		num=2*n+even(n-1);
		return num;
	}
}
