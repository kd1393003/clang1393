#include<stdio.h>
main()
{
	FILE* fp;
	char a[256],ch;
	int i = 0;
	printf("���O�����");
	scanf("%s", a);
	while (1)
	{
		printf("�X�R�A�\��%d(e�ŏI��\n", i);
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