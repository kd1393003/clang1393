#include<stdio.h>
main()
{
	int a = 100,c;
	int b = 200;
	int* p_a;
	int* p_b;
	p_a = &a;
	p_b = &b;
	printf("実行後%d　%d\n", *p_a, *p_b);
	
	c = p_a;//アドレス交換
	p_a = p_b;
	p_b = c;
	printf("実行前%d　%d",*p_a,*p_b);



}
