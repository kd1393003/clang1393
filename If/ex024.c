#include<stdio.h>
main()
{
char no;
	printf("文字を入力");
		scanf("%c", &no);
		if (no < 0x5A && no > 0x41) {
			
			printf("大文字");
		}
		else
		{
			printf("その他");
		}
}