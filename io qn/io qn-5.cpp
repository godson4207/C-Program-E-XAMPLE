#include<stdio.h>
int main(){
	int n,i;
	unsigned long long factorial = 1;
	printf("enter a number :");
	scanf("%d",&n);
	if(n<0){
	printf("factorial of negative number does not exist.\n");}
	else{
	for(i=1; i<=n; i++){
	factorial *=i;}
	printf("factorial number of %d = %llu\n",n,factorial);}
	return 0;
}
