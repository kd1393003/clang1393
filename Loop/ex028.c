#include<stdio.h>
main()
{
	int ia, gokei;
	gokei = 0;
	printf("数を入力");
	scanf("%d", &ia );
	while (ia != -999 )
	{
		gokei += ia;
		printf("数を入力");
		scanf("%d", &ia );
	}
	printf("goukei=%d\n", gokei ); 
}