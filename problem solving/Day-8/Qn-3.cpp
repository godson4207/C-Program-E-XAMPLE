#include<stdio.h>
int main()
{
	int n,i;
	long long factorial=1;
	scanf("%d",&n);
	if(n<0){
	printf("Negnative number does not have factorial");
	}else{
	for(i=1;i<=n;i++){
	factorial = factorial * i;
}
	printf("%lld",n,factorial);
	}
	return 0;
}
