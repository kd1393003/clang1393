#include<stdio.h>
main(int argc,char* argv[])
{
	printf("argc=%d\n", argc);

	for (int i = 0; i < argc; i++)
	{
		printf("argc[%d]=%s\n",i, argv[i]);
	}
}