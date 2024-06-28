#include<stdio.h>
main()
{
	FILE* fp;

	char a[256],ch,ab[256];
	int i = 0, sd;
	if (fp = fopen("score.txt", "r")) {
		fscanf(fp, "%s%d", ab, &sd);
		fclose(fp);
		printf("最高点%s\n %d\n", ab, sd);
	}
	else
	{
		printf("読み取れませんでした\n");
		return;
	}
	printf("名前入れろ");
	scanf("%s", a);
	while (1)
	{
		printf("スコア表示%d(eで終了\n", i);
		ch = getch();
		if (ch == 'e')
		{
			break;
		}
		i++;
	}
	
	if (i > sd)
	{
		fp = fopen("score.txt", "w");
		fprintf(fp, " %s\n %d\n", a, i);
		fclose(fp);
		printf("ハイスコア更新");
	}
}