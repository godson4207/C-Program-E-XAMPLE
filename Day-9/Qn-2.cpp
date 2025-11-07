#include<stdio.h>
int main()
{
	int n,num,last,rem=0;
	scanf("%d",&n);
	num=n;
	while(n!=0){
		last=n%10;
		rem=rem*10+last;
		n=n/10;
	}
	if (num==rem){
		printf("Palindrome");
	}
	else
	printf("Not Palindrome");
	return 0;
}
