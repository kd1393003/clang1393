#include<stdio.h>
main()
{
	int t[][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int *j, i,k;
	j = t[0];
	for (  k=1 ,i = 0; i < (3*3); i++,k++, *j++)
	{
		if (k == 2)
		{
			printf("%d", *j);
		}
		if (k==3)
		{
			k = 0;
		}
		
	}
}