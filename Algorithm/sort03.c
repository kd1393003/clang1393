#include<stdio.h>
#define size 5
main()
{
	int d[size] = { 30,7,25,16,10 };
	int w;
	int i ,j=0;
	
	for ( i = 1; i <size; i++)
	{
		j =i-1;
		while (j>=0)
		{
			if (d[j+1]>=d[j])
			{
				break;
			}
			else
			{
				w = d[j];
				d[j] = d[j + 1];
				d[j + 1] = w;
			}
			j--;
		}
	}
	i = 0;
	while (i<size)
	{
		printf("%d ", d[i]);
		i++;
	}


}