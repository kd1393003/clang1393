#include<stdio.h>
int sr(char* p);
main()
{
	char but[256];
	int mozi;
	printf("������");
	gets(but);
	mozi = sr(but);
	printf("���͂��ꂽ�������%d�ł�", mozi);
}
int sr(char* p)
{
	int cut;
	for  (cut = 0; *p != '\0'; p++, cut++);
	return(cut);
}
