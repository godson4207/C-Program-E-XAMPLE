#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter 2 numbers :");
	scanf("%d%d",&a,&b);
	int temp=a;
	a=b;
	b=temp;
	printf("SWAP =%d %d",a,b);
	return 0;
}
