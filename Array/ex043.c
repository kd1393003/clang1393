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
	printf("文字列:%s\n", no);
	printf("文字数は%d文字です\n", i);
	printf("文字数は%d文字\n", strlen(no));
}