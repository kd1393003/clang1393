#include<stdio.h>
main()
{
	int i,s,d;
	s = 0;
	d = 0;
	while (1)
	{
		printf("seisuunyuuryoku");
		scanf("%d", &i);
		if (i==-999)
		{
			break;
		}
		s += i;
		d++;
	}
	printf("%d\n", s);
	printf("%.3f", (float)s/d);
	
	



}
