//10. Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>
int power(int base,int pow);
int main()
{
	int base,pow;
	printf("enter base of number ");
	scanf("%d",&base);
	printf("enter power of the number ");
	scanf("%d",&pow);
	power(base,pow);
	printf("%d",power(base,pow));
}
int power(int base,int pow)
{

	if(pow!=0)
		return (base * power(base,pow-1));
	else
		return 1;
}
