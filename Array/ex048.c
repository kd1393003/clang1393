#include<stdio.h>
main()
{
	int i, k, f, g ;

	int a[2][2][3] = { {{3,4,5},{4,5,6} }, {{ 2, 2, 3 }, { 2,5,6 }
} };
	for (i=0,g=0; i < 2; i++)
	{
		printf("あぱーと%d\t", i + 1);
		for ( k = 0; k <2 ; k++)
		{
			printf("%d階 :", k + 1);
			for ( f = 0; f <3 ; f++)
			{
				printf("%d :", a[i][k][f]);
				g += a[i][k][f];
			}
		}
		printf("\n");
	}
	printf("全体で%d人住んでいますか", g);
}