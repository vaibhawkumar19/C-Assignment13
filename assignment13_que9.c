//9. Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>
int count_digit(int);
int main()
{
 int number;
    int count=0;

    printf("Enter any number :: ");
    scanf("%d",&number);

    count=count_digit(number);

    printf("\nTotal number of digits in [ %d ] are :: %d\n",number,count);

    return 0;
}
int count_digit(int n)
{
	static int count=0;
	if(n!=0)
	{
		count++;
		count_digit(n/10);
		
	}
	return count;
}
