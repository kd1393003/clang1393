#include<stdio.h>
#include<string.h>
struct dfg
{
	char neme[20];
	int tanka;
	int kosuu;
}*p,st[3] = { { "����҂�",30,5 },{ "�����S��",50,2 }, { "�M��",500,3 } };
main()
{
	p = st;
	int i;
	for ( i = 0; i < 3; i++,p++)
	{
		printf("���i��:%s", p->neme);
		printf("�P��:%d", p->tanka);
		printf("�R�X�g:%d", p->kosuu);
		printf("���z��%d\n", p->tanka * st[i].kosuu);
	}
}