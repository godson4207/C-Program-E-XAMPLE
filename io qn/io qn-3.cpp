#include<stdio.h>
int main(){
	char message[200];
	printf("enter a message :");
	fgets(message,sizeof(message),stdin);
	printf("you entered : %s",message);
	return 0;
}
