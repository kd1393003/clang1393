#include<stdio.h>
void he(int x, int y ,int* ta, float* hi);
main()
{
	int a, b, c;
	float d;
	printf("®”2‚Â“ü—Í");
	scanf("%d%d", &a, &b);
	he(a, b, &c, &d);
	printf("‡Œv‚Í%d@•½‹Ï‚Í%.2f",c,d);
}
void he(int x, int y ,int* ta, float* hi)
{
	*ta = x + y;
	*hi = ((float)x+y)/2;

}
