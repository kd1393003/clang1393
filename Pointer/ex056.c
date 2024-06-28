#include<stdio.h>
main()
{
	int t[][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int *j,i;
	j = t[0];
	printf("“ñŽŸŒ³”z—ñ‚”‚Ì“à—e\n");
	for ( i = 0; i < (3*3); i++)
	{
		printf("%d", *j++);
	}



}