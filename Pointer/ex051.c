#include<stdio.h>
main()
{
	int a = 50,c;
	int b = 10;
	int* p_a;
	int* p_b;
	p_a = &a;
	p_b = &b;
	c = *p_a + *p_b;
	printf("50+10=%d",c);




}
