#include<stdio.h>
int main(){
	int num,lastdigit,nextdigit,isascending=1;
	scanf("%d",&num);
	lastdigit = num % 10;
	num=num/10;
	while(num>0){
		nextdigit=num%10;
		if (nextdigit > lastdigit){
			isascending = 0;
			break;
		}
		lastdigit=nextdigit;
		num=num/10;
	}
	if(isascending)
	printf("Digits are in ascending order.");
	else
	printf("Not ascending.");
	return 0;
}
