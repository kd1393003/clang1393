#include<stdio.h>
int kai(int a, int b);
main()
{
	int a, b;
	printf("®”‚ğ“ü—Í");
	scanf("%d%d", &a, &b);
	printf("max=%d", kai(a, b));
}
int kai(int a, int b)
{
	if (a < b)
	{
		return(b);
	}
	else
	{
		return(a);
	}
}
