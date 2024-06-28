#include<stdio.h>
void k(char a, int b);
main()
{
	int  b;
	char a;
	printf("•¶Žš");
	scanf("%s", &a);
	printf("suuzi");
	scanf("%d", &b);
	k(a, b);

}
void k(char a, int b)
{
	for (int i = 0; i < b; i++)
	{
		printf("%c", a);
		
	}
	return;
}
