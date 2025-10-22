#include<stdio.h>
int main()
{
	int n,last;
	printf("Enter an number :");
	scanf("%d",&n);
	last = n % 10;
	printf("last digit = %d\n",last);
	return 0;
}
