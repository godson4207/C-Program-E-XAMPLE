#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if (a>=80 && a<=100)
	printf("A");
	else if(a>=60 && a<=79)
	printf("B");
	else if(a>=40 && a<=59)
	printf("C");
	else
	printf("Fail");
	return 0;
}
