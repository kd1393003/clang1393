#include<stdio.h>
main()
{
	int a = 100,c;
	int b = 200;
	int* p_a;
	int* p_b;
	p_a = &a;
	p_b = &b;
	printf("���s��%d�@%d\n", *p_a, *p_b);
	
	c = p_a;//�A�h���X����
	p_a = p_b;
	p_b = c;
	printf("���s�O%d�@%d",*p_a,*p_b);



}
