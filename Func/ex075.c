#include<stdio.h>
void sh(int x, int y,  int* wa, int* sa, int* sk, int* syo);
main()
{
	int a, b, c, d, e, f;
	printf("���l");
	scanf("%d", &a);
	printf("���l");
	scanf("%d", &b);
	sh(a, b, &c, &d, &e, &f);
	puts("���l�Ɛ��l�̎l�����Z");
	printf("%d %d %d %d", c, d, e, f);
}
void sh(int x, int y,  int* wa, int* sa, int* sk, int* syo)
{
	*wa = x + y;
	*sa = x - y;
	*sk = x * y;
	*syo = x / y;
	return;
}
