#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter 2 numbers :");
	scanf("%d%d",&a,&b);
	printf("\n Before swaping : a=%d,b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\nAfter swapping :a=%d,b=%d",a,b);
	return 0;
}
