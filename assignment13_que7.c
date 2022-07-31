//7. Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
int hcf(int,int);
int main()
{
	int a,b;
	printf("enter the number ");
	scanf("%d %d",&a,&b);
	hcf(a,b);
	printf("%d",hcf(a,b));
}
int hcf(int a,int b)
{
    while (a != b)
    {
        if (a > b)
        {
            return hcf(a - b, b);
        }
        else
        {
            return hcf(a, b - a);
        }  
    }
    return a;
}
