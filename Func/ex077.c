#include<stdio.h>
void he(int* ta, int* hi,int*k);
main()
{
	int a, b, c;
	float d;
	printf("����3����");
	scanf("%d%d%d", &a, &b,&c);
	he(&a, &b, &c);
}
void he(int* ta, int* hi, int* k)
{
	printf("�ő�l");
	(*ta > *hi) ? (*ta > *k) ? printf("%d", *ta) : printf("%d", *k) : (*hi > *k) ? printf("%d", *hi) : printf("%d", *k);
	printf("�ŏ��l");
	(*ta > *hi) ? (*hi > *k) ? printf("%d", *k) : printf("%d", *hi) : (*ta > *k) ? printf("%d", *k) : printf("%d", *ta);
	return;
}