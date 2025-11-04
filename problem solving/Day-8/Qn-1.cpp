#include<stdio.h>
int main()
{
	int a;
	int max=0,min=9;
	scanf("%d",&a);
	while(a!=0){
		int last = a%10;
		if(last>max)
		max=last;
		if(last<min)
		min=last;
		a/=10;
	}
	printf("%d\n",max);
	printf("%d",min);
	return 0;
}
