#include<stdio.h>
int main()
{
	int a;
	printf("Enter a mark(100) :");
	scanf("%d",&a);
	if (a>=90 && a<=100)
	printf("A");
	else if (a>=80 && a<=89)                 /*grade using else if */
	printf("B");
	else if (a>=70 && a<=79)
	printf("C");
	else if (a>=60 && a<=69)
	printf("C");
	else if (a>=50 && a<=59)
	printf("D");
	else
	printf("Fail");
	return 0;
}
