#include<stdio.h>
main()
{
	int a, g=0, i=0;
	printf("数値を入力してください");
	while (scanf("%d",&a) != EOF)
	{
		printf("整数：%d\n",a);
		g += a;
		i++;
		printf("数値を入力してください");
	}
	printf("合計：%d   ", g);
	printf("平均：%.2f", (float)g / i);

}