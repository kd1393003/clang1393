#include<stdio.h>
int add(int a, int b);
int hiku(int a, int b);
int kake(int a, int b);
int wari(int a, int b);

main()
{
	int a, b, kotae;
	printf("®”“ñ‚Â“ü—Í");
	scanf("%d%d", &a, &b);
	kotae = add(a, b);
	printf("‡Œv‚Í%d\n", kotae);
	printf("a-b‚Í%d", hiku(a,b));
	printf("a-b‚Í%d", kake(a, b));
	printf("a-b‚Í%d", wari(a, b));
}
int add(int a, int b)
{
	return(a+b);
}

int hiku(int a, int b)
{
	return(a - b);
}
int kake(int a, int b)
{
	return(a * b);
}
int wari(int a, int b)
{
	return(a / b);
}