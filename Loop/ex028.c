#include<stdio.h>
main()
{
	int ia, gokei;
	gokei = 0;
	printf("�������");
	scanf("%d", &ia );
	while (ia != -999 )
	{
		gokei += ia;
		printf("�������");
		scanf("%d", &ia );
	}
	printf("goukei=%d\n", gokei ); 
}