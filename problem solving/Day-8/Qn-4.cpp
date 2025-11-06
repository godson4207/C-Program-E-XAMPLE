#include<stdio.h>
int main()
{
	int num,digit;
	int count=0,sum=0,prod=1;
	scanf("%d",&num);
	if (num==0){
		count = 1;
		sum = 0;
		prod = 0;
	}else
	{
		while(num>0){
			digit = num%10;
			count++;
			sum += digit;
			prod *= digit;
			num/=10;
		}
	}
	printf("count %d\n",count);
	printf("sum %d\n",sum);
	printf("product %d\n",prod);
	return 0;
}
