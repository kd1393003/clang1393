#include<stdio.h>
main()
{
	int d[5] = { 30,7,25,16,10 };
	int w;
	int i = 0,j=0;
	
	for ( i = 0; i < 4; i++)
	{
		j = 1 + i;
		while (j<5)
		{
			if (d[i]>d[j])
			{
				w = d[i];
				d[i] = d[j];
				d[j] = w;

			}
			j++;
		}
	}
	i = 0;
	while (i<5)
	{
		printf("%d ", d[i]);
		i++;
	}


}