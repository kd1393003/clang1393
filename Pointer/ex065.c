#include<stdio.h>
main()
{
	char*  p[] = {"Programiing2","Algorithm","Programiing1","C"};

	char * w=0;
	for (int i = 0,k=0; i < 3; i++ )
	{
		k = i + 1;
		
		for (;  k<4 ; k++)
		{
			if (strcmp(p[i],p[k])==1)
			{
				w = p[k];
				p[k] = p[i];
				p[i] = w;
			}

		}
	}
	int i = 0;
	while (i < 4)
	{
		printf("%s\n", p[i]);

		i++;
	}

}