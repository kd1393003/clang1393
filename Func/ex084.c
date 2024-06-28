#include<stdio.h>
char sr(char* p,char*g);
main()
{
	char but[256];
	int mozi;
	char mozi2[256];
	printf("•¶Žš—ñ");
	scanf("%s", but);
	sr(but,mozi2);
	printf("“ü—Í‚³‚ê‚½•¶Žš—ñ‚Í‚Å‚·");
	
	printf("%s", mozi2);
	
}
char sr(char* p,char*g)
{
	int cut,i=0;
	for (cut = 0; *(p+1) != '\0'; p++, cut++);
	for ( ;  i<= cut;p-- ,i++,g++)
	{
		*g = *p;
	}
	*g = '\0';
}
