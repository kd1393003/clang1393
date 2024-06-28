#include<stdio.h>
main()
{
	int i, gokei;
	int a[][3] = { {10,20,30},{1,2,3} };
	for (gokei = 0, i = 0; i <= 2; i++)
	{
		printf("a[0][%d]=%D\n", i, a[0][1]);
		gokei += a[0][1];
	}
	printf("０行目の合計%d", gokei);
	for (gokei = 0, i = 0; i <= 2; i++)
	{
		printf("a[1][%d]=%d\n", i, a[1][1]);
		gokei += a[1][1];
	}
	printf("1行目の合計%d", gokei);
}
