#include<stdio.h>
main()
{
int no;
	printf("西暦を入力");
		scanf("%d", &no);
		if (no % 4 == 0) {
			printf("うるう年です");
		}
		else
		{
			printf("");
		}
}