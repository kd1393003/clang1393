#include<stdio.h>
int saidai(int* a,int r);
//int saisyou(int* b);
main()
{
	int deta[8] = { 6,10,8,2,9,5,1,7 },m,*s;
	m = saidai(deta,&s);
	
	printf("Å‘å’l%dÅ¬’l%d", m,s);
}
int saidai(int* a,int f)
{

	int i = 0,j=0,w;
	for ( i = 0; i < 7; i++)
	{
		j = i + 1;

		while (j < 8)
		{
			if (*(a + i) > *(a + j))
			{
				w = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = w;
			}
			j++;
		}
	}
	f = a[0];
	return(a[7]);
}



