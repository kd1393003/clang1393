#include<stdio.h>
#include<string.h>
struct shk{
	char neme[20];
	int tanka;
} st,*p;
main()
{
	p = &st;
	printf("¤•i–¼");
	scanf("%s", p->neme);
	p->tanka = 30;
	printf("neme->%s\n", p->neme);
	printf("tanak->%d\n", (*p).tanka);
	printf("tanak->%s\n", st.neme);
	printf("tanak->%d\n", st.tanka);
}
