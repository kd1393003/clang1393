#include<stdio.h>
main()
{
	int no;
	printf("���Z�q������");
	scanf("%d", &no);
	if (no < 50 && no >= 10) {
		switch (no / 10)
		{
		case 1: 
			printf("10�_��ł�\n");
			break;
		case 2: 
			printf("20�_��ł�\n");
			break;
		case 3:
			printf("30�_��ł�\n");
			break;
		case 4:
			printf("40�_��ł�\n");
			break;
		}
	}
	else
	{
		printf("era-");
	}
}