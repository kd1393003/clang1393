#include<stdio.h>
main()
{
	char su,su1;	
	su = '5';
	su1 = '6';
	printf("%c*%c=%d \n",su,su1,(su-0x30)*(su1-0x30));
}