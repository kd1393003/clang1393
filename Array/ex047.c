#include<stdio.h>
main()
{
	int i,z;
	float a[3][2],gokei;
	z = 0;
	while (z < 1)
	{
		for (gokei = 0, i = 0; i <= 1; i++)
		{
			printf("a[%d][%d]=", z, i );
			scanf("%f", &a[z][i]);
				gokei += a[z][i];
		}
		z++;
	}
	  printf("‚Os–Ú‚Ì•½‹Ï%.2f\n\n", gokei/i);
	  while (z < 2)
	  {
		  for (gokei = 0, i = 0; i <= 1; i++)
		  {
			  printf("a[%d][%d]=", z, i );
			  scanf("%f", &a[z][i]);
			  gokei += a[z][i];
		  }
		  z++;
	  }
	printf("1s–Ú‚Ì•½‹Ï%.2f", gokei/i);
	while (z < 3)
	{
		for (gokei = 0, i = 0; i <= 1; i++)
		{
			printf("a[%d][%d]=", z, i);
			scanf("%f", &a[z][i]);
			gokei += a[z][i];
		}
		z++;
	}
}
