#include<stdio.h>
#include<time.h>
int main()
{
	time_t t;
	struct tm *currentTime;
	time(&t);
	currentTime = localtime(&t);
	printf("current time :%02d,%02d,%02d\n",
	       currentTime -> tm_hour,
	       currentTime -> tm_min,
	       currentTime -> tm_sec);
	       return 0;
}
