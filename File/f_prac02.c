#include<stdio.h>
main()
{
	FILE* fp;

	char a[256],ch,ab[256];
	int i = 0, sd;
	if (fp = fopen("score.txt", "r")) {
		fscanf(fp, "%s%d", ab, &sd);
		fclose(fp);
		printf("�ō��_%s\n %d\n", ab, sd);
	}
	else
	{
		printf("�ǂݎ��܂���ł���\n");
		return;
	}
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
	
	if (i > sd)
	{
		fp = fopen("score.txt", "w");
		fprintf(fp, " %s\n %d\n", a, i);
		fclose(fp);
		printf("�n�C�X�R�A�X�V");
	}
}