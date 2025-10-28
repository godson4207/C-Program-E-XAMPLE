#include<stdio.h>
int main()
{
	int a,last;
	printf("Enter a 3 digit number :");
	scanf("%d",&a);
	last=a%10;
	printf("Last digit =%d",last);
	return 0;
}
