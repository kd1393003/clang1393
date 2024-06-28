#include<stdio.h>
#include<string.h>
main()
{
	int i;
	char no[] = "orange";
	i = 0;
	while (no[i] != '\0')
	{
		i++;
	}
	printf("•¶š—ñ:%s\n", no);
	printf("•¶š”‚Í%d•¶š‚Å‚·\n", i);
	printf("•¶š”‚Í%d•¶š\n", strlen(no));
}