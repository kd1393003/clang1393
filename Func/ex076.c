#include<stdio.h>
void he(int x, int y ,int* ta, float* hi);
main()
{
	int a, b, c;
	float d;
	printf("整数2つ入力");
	scanf("%d%d", &a, &b);
	he(a, b, &c, &d);
	printf("合計は%d　平均は%.2f",c,d);
}
void he(int x, int y ,int* ta, float* hi)
{
	*ta = x + y;
	*hi = ((float)x+y)/2;

}
