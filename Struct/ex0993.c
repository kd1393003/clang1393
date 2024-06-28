#include<stdio.h>
void gyaku(char* p);
main()
{
	char s[50];
	char* f;
	f = s;
	while (f != NULL)
	{
		f=gets(s);
		gyaku(f);
	}
}
void gyaku(char* p)
{
	char d[50];
	char *e;
	e = d;
	for (; *(p+1) != '\0'; p++);
	while (*p !='\0')
	{
		*e = *p;
		p--;
		e++;
	}
	*e = '\0';
	e = d;
	printf("%s\n=", e);
}
