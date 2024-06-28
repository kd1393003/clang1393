#include<stdio.h>
struct syohindeta {
	char neme[20];
	int tanka;
}s1,*p;
void display1(int *p);
void display2(struct syohindeta syohin);
main()
{
	//int a = 10;
	p = s1;
	 *p= { "ƒPƒVƒSƒ€",50 };
	display1(p);
	display2(*p);
}
void display1(int *p)
{
	printf("%s\n%d", p->, syohin.tanka);
}
void display2(struct syohindeta syohin)
{
	printf("%s\n%d", syohin.neme, syohin.tanka);
}
