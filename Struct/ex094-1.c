#include<stdio.h>
struct syohindeta {
	char neme[20];
	int tanka;
};
void display1(int a);
void display2(struct syohindeta syohin);
main()
{
	int a = 10;
	struct syohindeta syohin = { "ÉPÉVÉSÉÄ",50 };
	display1(a);
	display2(syohin);
}
void display1(int a)
{
	printf("%d", a);
}
void display2(struct syohindeta syohin)
{
	printf("%s\n%d", syohin.neme, syohin.tanka);
}
