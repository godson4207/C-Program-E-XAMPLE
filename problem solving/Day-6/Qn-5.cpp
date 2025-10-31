#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if (ch>='A' && ch<='Z')
	printf("Uppercase",ch);
	else if (ch>='a' && ch<='z')
	printf("Lowercase",ch);
	else if (ch>='0' && ch<='9')
	printf("Digit",ch);
	else
	printf("Specialsymbol",ch);
	return 0;
}
