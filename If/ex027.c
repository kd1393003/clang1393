#include<stdio.h>
main()
{
char no;
	printf("���������");
		scanf("%c", &no);
		if (no <= 'Z' && no >= 'A') {
			
			printf("������ϊ�%c", no + 0x20);
		}
		else
		{
			if (no>='a' && no<='z')
			{
				printf("�ϊ������%c", no - 0x20);
			}
			else
			{
				printf("�G���[");
			}
		}
}