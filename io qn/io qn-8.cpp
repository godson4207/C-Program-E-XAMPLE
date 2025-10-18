#include<stdio.h>
int main()
{
	int num;
	printf("Enter an integer :");
	scanf("%d", &num);
	printf("The number in octal formate : %o\n",num);
	printf("The number in octal formate prefix : %#o\n",num);
	return 0;
}
