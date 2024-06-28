#include<stdio.h>
main()
{//カウントアップバージョン
	int no,k,su;
	printf("数は");
		scanf("%d", &su);
		no = 1;
	do
	{
		k = 0;
		//半角スペース表示
		while (k < su - no)
		{
			k++;
			printf(" ");
		}
		k = 0;
		//*を表示する
		while (k < no)
		{
			k++;
			printf("*");
		}
		printf("\n");
		no++;
	} while (su >= no);
}