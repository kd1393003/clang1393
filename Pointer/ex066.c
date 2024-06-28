#include<stdio.h>
main()
{
	char* k[3] = { "wii","ds","prento" };
	int i;
	char **p;
	p =k ;
	for ( i = 0; i < 3; i++)
	{
		printf("%s\n",*p++);
	}

}