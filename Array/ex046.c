#include<stdio.h>
main()
{
	int i,z, gokei;
	int a[][3] = { {10,20,30},{1,2,3} };
	z = 0;
	while (z < 1)
	{
		for (gokei = 0, i = 0; i <= 2; i++)
		{
			printf("a[%d][%d]=%d\n",z, i, a[z][i]);
			gokei += a[z][i];
		}
		z++;
	}
	  printf("�O�s�ڂ̍��v%d\n\n", gokei);
	  for (gokei = 0, i = 0; i <= 2; i++)
	  {
		printf("a[%d][%d]=%d\n",z, i, a[z][i]);
		gokei += a[z][i];
	  }
	printf("1�s�ڂ̍��v%d", gokei);
}
