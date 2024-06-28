#include<stdio.h>
char kai(char a);
main()
{
	char a;
	printf("®”‚ğ“ü—Í");
	scanf("%s", &a);
	printf("max=%d", kai(a));
}
char kai(char a)
{
	if (a <= 0x79 && a>=0x61)
	{
		return(0);
	}
	else
	{
		return(1);
	}
}
