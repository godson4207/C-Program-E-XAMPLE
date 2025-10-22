#include<stdio.h>
int main()
{
	int n,first,last,sum;
	printf("Enter 3 digit number :");
	scanf("%d",&n);
	last = n % 10;
	first = n / 100;
	sum = first + last;
	printf("sum of first and 3rd digit : %d\n",sum);
	return 0;
}












