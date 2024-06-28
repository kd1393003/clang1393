#include<stdio.h>
main()
{
	char *a[3] = { "car","bus","shinkansen" };
	int i;
	i = 0;
	while (i<3)
	{
		printf("%s\n",a[i]);
		
		i++;
	}
}