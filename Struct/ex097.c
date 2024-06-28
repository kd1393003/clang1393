#include<stdio.h>
#define data_end -1
struct ken
{
	int code;
	char neme[20];
	struct ken* next;
};
main()
{
	struct ken kendeta[] = { {1,"a",NULL},{2,"e",NULL}, {3,"d",NULL}, {4,"e",NULL}, {5,"f",NULL}, {6,"g",NULL}, {7,"h",NULL}, {data_end,"",NULL} };
	struct ken* p, * wp;
	p = wp = kendeta;
	do
	{
		p++;
		wp->next = p;
		wp = p;


	} while (p->code !=data_end);
	p = kendeta;
	p->next = p + 6;//6つ先のアドレス変更
	for ( p=kendeta; p->code != data_end; p=p->next)
	{
		printf("%d%s\n", p->code,p->neme );
	}


}
	

	


