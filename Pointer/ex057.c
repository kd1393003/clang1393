#include<stdio.h>
main()
{
	int t[][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int *j,i;
	j = t[0];
	printf("二次元配列ｔの内容\n");
	for ( i = 0; i < (3*3); i++)
	{
		printf("%d", *j++);
		if ((i + 1) % 3 == 0)
		{
			printf("\n");
		}
	}



}