#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter 2 numbers :");
	scanf("%d%d",&num1,&num2);
	if(num1==num2){
		printf("Equal");
	}else{
		printf("Not equal");
	}
	return 0;
}
