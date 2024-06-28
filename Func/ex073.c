#include<stdio.h>
void er(void);
main()
{
	int a, b;
	printf("deta deta2");
	scanf("%d%d", &a, &b);
	if (b==0)
	{
		er();
	}
	else
	{
		printf("%d :%d:%d", a, b, a % b);
	}
}
void er(void)
{
	printf("gert");
	return;
}
