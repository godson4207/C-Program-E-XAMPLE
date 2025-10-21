#include<stdio.h>
int main()
{
	int a,b,rem;
	printf("enter two numbers :");
	scanf("%d%d",&a,&b);
	rem = a%b;
	printf("remainder = %d",rem);
	return 0;
}
