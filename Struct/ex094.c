#include<stdio.h>
#include<string.h>
#define nin 2
struct syouhinndeta
{
	char neme[20];
	int br[3];
	char blood[5];
}s1[nin], * p;
main()
{

	p = s1;
	for (int i = 0; i < nin; i++,p++)
	{
		printf("%d�l��", i+1);
		printf("���O");
		scanf("%s", p->neme);
		printf("���N����");
		scanf("%d%d%d", &p->br[0], &p->br[1], &p->br[2]);
		printf("���t�^");
		scanf("%s", p->blood);
	}
	p = s1;
	for (int i = 0; i < nin; i++,p++)
	{
		if (strcmp (p->blood, "A") == 0)
		{
			printf("%s--%d�N%d��%d�����܂�@���t�^-%s\n", p->neme, p->br[0], p->br[1], p->br[2], p->blood);
		}
	}
}