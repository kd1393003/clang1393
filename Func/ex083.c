#include<stdio.h>
int sr(char* p);
main()
{
	char but[256];
	int mozi;
	printf("文字列");
	gets(but);
	mozi = sr(but);
	printf("入力された文字列は%dです", mozi);
}
int sr(char* p)
{
	int cut;
	for  (cut = 0; *p != '\0'; p++, cut++);
	return(cut);
}
