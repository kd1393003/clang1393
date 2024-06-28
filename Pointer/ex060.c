#include<stdio.h>
main()
{
	char deta[15] = "language" ;
	char deta2[15];
	char *a, *b,k;
	a = deta;
	b = deta2;
	printf("deta[ ]=%s\n", a);
	printf("•¶š“ü‚ê‚ë");
	scanf("%s", &k);
	printf("ŒŸõŒ‹‰Ê‚Í");
	int i = 0;
	while (*(a+i))
		{
			if (*(a+i) == k)
			{
				printf("%d ",i+1);
			}
			i++;
		}
	printf("•¶š–Ú‚Å‚·");
}