#include<stdio.h>
char renketu(char* d, char* k);
main()
{
	char a[523],  b[523];
	scanf("%s%s", &a, &b);
	 renketu(a, b);
	 printf("%s", a);
}
char renketu(char* d, char* k)
{
	int cut;
	
	for (; *(d ) != '\0'; d++);
	for (; *(k)!= '\0'; d++, k++)
	{
		*d = *k;
	}
	*d = '\0';
}