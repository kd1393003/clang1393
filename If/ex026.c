#include<stdio.h>
main()
{
	char no;
	printf("文字を入力");
	scanf("%c", &no);
	if (no < 3 && no > 1) {

		printf("最終日は２８日です");
	}
	else
	{
		if (no == 4 ||  no == 6 ||  no == 9 ||  no == 11)
		{
			printf("最終日は30日です");
		}
		else{
			printf("最終日は31日です");
		}
	}
}



	
	
		
		
	