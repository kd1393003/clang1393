#include<stdio.h>
main()
{
	int no,k;
	k = 0;
	for (no = 1; no <= 10; no++)
	{
		k += no;
		printf("1����%d�܂ł̘a%d\n", no,k);
	}
}