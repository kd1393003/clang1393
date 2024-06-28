#include<stdio.h>
int sr(char* p);
main()
{
	char but[256];
	int mozi;
	printf("•¶Žš—ñ");
	gets(but);
	mozi = sr(but);
	printf("“ü—Í‚³‚ê‚½•¶Žš—ñ‚Í%d‚Å‚·", mozi);
}
int sr(char* p)
{
	int cut;
	for  (cut = 0; *p != '\0'; p++, cut++);
	return(cut);
}
