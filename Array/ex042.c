#include<stdio.h>
main()
{
	int i;
	char no[] = "Apple";
	for (i = 0; no[i] != '\0'; i++)
	{
		printf("%c", no[i]);
	}
	printf("\n");
	printf("•¶Žš—ñ‚ð•\Ž¦\n");
	printf("%s\n", &no[0]);
}