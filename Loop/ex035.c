#include<stdio.h>
main()
{
	int su,gokei;
	gokei = 0;
	while (1)
	{
		printf("����������");
		scanf("%d", &su);
		if (su == -999)  
		{
			break;
		}
		gokei += su;
	}
	printf("%d", gokei);

}