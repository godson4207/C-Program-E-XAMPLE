#include<stdio.h>
int main(){
	float base,height,area;
	printf("Enter base:");
	scanf("%f",&base);                        //area of triangle 1/2 base*height
	printf("Enter height:");
	scanf("%f",&height);
	area= 0.5*base*height;
	printf("Area=%.2f",area);
	return 0;
}
