#include<stdio.h>
main()
{
	int no,k;
	k = 0;
	for (no = 1; no <= 10; no++)
	{
		k += no;
		printf("1から%dまでの和%d\n", no,k);
	}
}