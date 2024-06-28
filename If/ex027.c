#include<stdio.h>
main()
{
char no;
	printf("•¶Žš‚ð“ü—Í");
		scanf("%c", &no);
		if (no <= 'Z' && no >= 'A') {
			
			printf("•¶Žš‚ð•ÏŠ·%c", no + 0x20);
		}
		else
		{
			if (no>='a' && no<='z')
			{
				printf("•ÏŠ·‚·‚é‚Æ%c", no - 0x20);
			}
			else
			{
				printf("ƒGƒ‰[");
			}
		}
}