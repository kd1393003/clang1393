#include<stdio.h>
main()
{
	int i[]= { 11,22,33,44,55,66 },a;
	int* k;
	float d[] = { 11.1,22.2,33.3,44.4, },b;
	float* l;
	b = 0;
	a = 0;
	k = i;
	a = a + *k;
	k++;
	a = a + *k;
	k++;
	a = a + *k;
	k++;
	a = a + *k;
	k++;
	a = a + *k;
	k++;
	a = a + *k;
	k++;
	





	l = d;
	b = b + *l;
	l++;
	b = b + *l;
	l++;
	b = b + *l;
	l++;
	b = b + *l;
	printf("���v��%d�@���ρ�%.3f�@\n",a,(float)a/6);
	printf("���v��%.3f�@���ρ�%.3f�@",b,b/4);

}