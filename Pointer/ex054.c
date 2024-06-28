#include<stdio.h>
main()
{
	int i[3] = { 10,20,30 };
	int* k;
	double d[3] = { 10.0,20.0,30.0 };
	double* l;
	k = i;
	printf("k=%d  ", *k);
	k++;
	printf("%d  ", *k);
	k++;
	printf("%d\n", *k);

	l = d;
	printf("d=%.1f  ", *l);
	l++;
	printf("%.1f  ", *l);
	l++;
	printf("%.1f\n", *l);

}