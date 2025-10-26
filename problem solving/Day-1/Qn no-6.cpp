#include<stdio.h>
int main()
{
	float num,factorial=1.0;
	int i;
	printf("Enter a number :");
	scanf("%f",&num);
	for (i=1; i<=(int)num; i++)
	{
		factorial *=i;
	}
	printf("factorial of %.2f is : %.2f\n",num,factorial);
	return 0;
}
