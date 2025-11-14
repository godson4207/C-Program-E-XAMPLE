#include<stdio.h>
int main(){
	float l, b, area;
	printf("Enter length of rectangle:");
	scanf("%f", &l);
	printf("Enter breath of rectangle:");
	scanf("%f", &b);
	area=l * b;
	printf("Area of rectangle=%.2f",area);
	return 0;
}

