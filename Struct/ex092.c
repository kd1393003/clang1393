#include<stdio.h>
#include<string.h>
struct dfg
{
	char neme[20];
	int tanka;
	int kosuu;
}st[3] = { { "えんぴつ",30,5 },{ "消しゴム",50,2 }, { "筆箱",500,3 } };
main()
{
	int i;
	for ( i = 0; i < 3; i++)
	{
		printf("商品名:%s\n", st[i].neme);
		printf("単価:%d\n", st[i].tanka);
		printf("コスト:%d\n", st[i].kosuu);



	}
}