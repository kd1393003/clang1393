#include<stdio.h>
main()
{
int a,b,no;
printf("‰‰Zq‚ğ“ü—Í");
scanf("%d", &no);
printf("2‚Â‚Ì®”‚ğ“ü—Í");
scanf("%d%d", &a, &b);
if (no < 3) {
	if (no<2)
	{
		printf("%d", a + b);
	}
	else
	{
		printf("%d", a - b);
	}
 }
else
 {
	if(no<4)
	{
		printf("%d", a * b );
	}
	else
	{
		printf("%d", a / b);
	}
 }
}