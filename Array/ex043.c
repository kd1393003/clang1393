#include<stdio.h>
#include<string.h>
main()
{
	int i;
	char no[] = "orange";
	i = 0;
	while (no[i] != '\0')
	{
		i++;
	}
	printf("������:%s\n", no);
	printf("��������%d�����ł�\n", i);
	printf("��������%d����\n", strlen(no));
}