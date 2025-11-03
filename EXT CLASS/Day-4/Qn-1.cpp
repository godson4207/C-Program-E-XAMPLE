#include<stdio.h>
int main()
{
	//first digit of a number
	int num,firstdigit;
	scanf("%d",&num);
	while(num>=9){
		num = num/10;
	}
	firstdigit = num;
	printf("%d",firstdigit);
	return 0;
}
