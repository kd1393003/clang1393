#include<stdio.h>
#define size 8
main()
{
	int d[size] = { 70,60,80,50,40,20,30,10 };
	int w , gap;
	int i ,j=0;
	gap = size / 2;
		while (gap > 0)
		{


			for (i = gap; i < size; i++)
			{
				j = i - gap;
				while (j >= 0)
				{
					if (d[j + gap] >= d[j])
					{
						w = d[j];
						d[j] = d[j + gap];
						d[j + gap] = w;
					}
					else
					{
						break;
					}
					j-=gap;
				}
			}
			gap = gap / 2;
		}
	i = 0;
	while (i<size)
	{
		printf("%d ", d[i]);
		i++;
	}


}