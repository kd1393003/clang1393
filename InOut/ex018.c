#include<stdio.h>
main()
{
	int a, b, c, sum;
	float avg;
	printf("整数を3個入力：");
		scanf("%d%d%d", &a, &b, &c);
		sum = a + b + c;
			avg = (float)sum / 3;
		printf(" 合計は%d\t 平均=%.2f\n", sum, avg);
}