#include<stdio.h>
int add(int a, int b);
int hiku(int a, int b);
int kake(int a, int b);
int wari(int a, int b);

main()
{
	int a, b, kotae;
	printf("整数二つ入力");
	scanf("%d%d", &a, &b);
	kotae = add(a, b);
	printf("合計は%d\n", kotae);
	printf("a-bは%d", hiku(a,b));
	printf("a-bは%d", kake(a, b));
	printf("a-bは%d", wari(a, b));
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