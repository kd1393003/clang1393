#include<stdio.h>
#include<string.h>
struct dfg
{
	char neme[20];
	int tanka;
	int kosuu;
}st[3] = { { "����҂�",30,5 },{ "�����S��",50,2 }, { "�M��",500,3 } };
main()
{
	int i;
	for ( i = 0; i < 3; i++)
	{
		printf("���i��:%s\n", st[i].neme);
		printf("�P��:%d\n", st[i].tanka);
		printf("�R�X�g:%d\n", st[i].kosuu);



	}
}