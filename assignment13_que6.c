//6. Write a recursive function to calculate factorial of a given number.
#include<stdio.h>
int fact(int );
int main()
{
	int n;
	printf("enter the number ");
	scanf("%d",&n);
	fact(n);
	printf("%d",fact(n));
}
int fact(int n)
{
	if (n>=1)
        return n*fact(n-1);
    else
        return 1;
}
