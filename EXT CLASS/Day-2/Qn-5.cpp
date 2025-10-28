#include<stdio.h>
int main()
{
	int a,b,c,square,rectangle;
	printf("Enter a number :");
	scanf("%d%d%d",&a,&b,&c);
	square=a*a;
	rectangle=b*c;
	printf("Square :%d",square);
	printf("\nRectangle =%d",rectangle);
	return 0;
}
