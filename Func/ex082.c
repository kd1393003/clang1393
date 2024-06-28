#include<stdio.h>
#include<string.h>
int  saidai(int* a,int f);
int  saisyou(int* b,int r);
main()
{
	int deta[8] = { 6,10,8,2,9,5,1,7 },i=0;
	char g[100];
	printf("ƒ\[ƒg•ûŒü‚ğ“ü—Í");
	scanf("%s", g);

	if (strcmp(g, "¸‡") == 0)
	{
		saidai(deta, 8);
	}
	if (strcmp(g, "~‡") == 0)
	{
		saisyou(deta, 8);
	}
	while (i<8)
	{
		printf("%d\n", deta[i]);
		i++;
	}

}
	int saidai(int* a, int f)
	{

		int i = 0, j = 0, w;
		for (i = 0; i < f - 1; i++)
		{
			j = i + 1;

			while (j < f)
			{
				if (*(a + i) > *(a + j))
				{
					w = *(a + i);
					*(a + i) = *(a + j);
					*(a + j) = w;
				}
				j++;
			}
		}
	}
	
	int saisyou(int* b,int r)
{

	int i = 0, j = 0, w;
	for (i = 0; i < r - 1; i++)
	{
		j = i + 1;

		while (j < r)
		{
			if (*(b + i) > *(b + j))
			{
				w = *(b + i);
				*(b + i) = *(b + j);
				*(b+ j) = w;
			}
			j++;
		}
	}

	
}



