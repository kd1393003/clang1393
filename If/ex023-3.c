#include<stdio.h>
main()
{
int a,b,no;
printf("演算子を入力");
scanf("%d", &no);
printf("2つの整数を入力");
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