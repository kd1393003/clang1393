#include<stdio.h>
main()
{
	FILE* fp;
	char a[256],ch;
	int i = 0;
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
	fp = fopen("score.txt", "w");
	fprintf(fp," %s\n %d\n", a, i);
	fclose(fp);
}