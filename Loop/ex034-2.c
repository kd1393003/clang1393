#include<stdio.h>
main()
{
	int no,k;
	printf("”‚Í");
		scanf("%d", &no);
	do
	{
		k = 0;
		while (k<5)
		{
			k++;
			printf("*");
		}
		no--;
		printf("\n");
	} while (0 < no);
}