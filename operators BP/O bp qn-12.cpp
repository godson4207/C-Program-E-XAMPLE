#include<stdio.h>
int main()
{
	int num;
	printf("Enter number :");
	scanf("%d",&num);
	if (num < 0){
		num = -num;
	}
	printf("Absolute value is :%d", num);
	return 0;
}

