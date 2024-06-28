#include<stdio.h>
#include<stdlib.h>
main(int a, char* b[])
{
	int s, g=0;
	for (int i = 0; i < a; i++)
	{
		s = atoi(b[i]);
		g += s;
	}
	printf("%d", g );
}