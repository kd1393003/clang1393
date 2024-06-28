#include<stdio.h>
main()
{
	int no;
	printf("演算子を入れて");
	scanf("%d", &no);
	if (no < 50 && no >= 10) {
		switch (no / 10)
		{
		case 1: 
			printf("10点台です\n");
			break;
		case 2: 
			printf("20点台です\n");
			break;
		case 3:
			printf("30点台です\n");
			break;
		case 4:
			printf("40点台です\n");
			break;
		}
	}
	else
	{
		printf("era-");
	}
}