#include<stdio.h>
main()
{
	int d[5] = { 30,7,25,16,10 };
	int w;
	int i = 4,j=0;
	
	for ( i = 4; i >0; i--)
	{
		j =0;
		while (j<i)
		{
			if (d[j]>d[j+1])
			{
				w = d[j];
				d[j] = d[j+1];
				d[j+1] = w;

			}
			j=j+1;
		}
	}
	i = 0;
	while (i<5)
	{
		printf("%d ", d[i]);
		i++;
	}


}