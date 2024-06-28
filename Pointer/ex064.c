#include<stdio.h>
main()
{
	char *a[3] = { "car","bus","shinkansen" };
	int i;
	i = 0;
	char* p;
	while (i<3)
	{
		p = a[i];
		while (*p)
		{
			printf("%c\n", *p);
			p++;
		}

		printf("\n");
		i++;
	}

	
}