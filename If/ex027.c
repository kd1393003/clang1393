#include<stdio.h>
main()
{
char no;
	printf("文字を入力");
		scanf("%c", &no);
		if (no <= 'Z' && no >= 'A') {
			
			printf("文字を変換%c", no + 0x20);
		}
		else
		{
			if (no>='a' && no<='z')
			{
				printf("変換すると%c", no - 0x20);
			}
			else
			{
				printf("エラー");
			}
		}
}