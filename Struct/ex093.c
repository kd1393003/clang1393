#include<stdio.h>
#include<string.h>
struct dfg
{
	char neme[20];
	int tanka;
	int kosuu;
}*p,st[3] = { { "‚¦‚ñ‚Ò‚Â",30,5 },{ "Á‚µƒSƒ€",50,2 }, { "•M” ",500,3 } };
main()
{
	p = st;
	int i;
	for ( i = 0; i < 3; i++,p++)
	{
		printf("¤•i–¼:%s", p->neme);
		printf("’P‰¿:%d", p->tanka);
		printf("ƒRƒXƒg:%d", p->kosuu);
		printf("‹àŠz%d\n", p->tanka * st[i].kosuu);
	}
}