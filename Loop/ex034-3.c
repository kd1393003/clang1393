#include<stdio.h>
main()
{
	int no,k,a;
	printf("”‚Í");
		scanf("%d", &no);
		a = no + 1;
	do
	{
		k = 0;
		while (k < a - no)
		{
			k++;
			printf("*");
		}
		no--;
		printf("\n");
	} while (0 < no);
}