#include<stdio.h>
int add(int a, int b, int c);
float see(float a, float b, float c);
main()
{
	int a, b,c;
	printf("整数二つ入力");
	scanf("%d%d%d", &a, &b,&c);
	
	printf("合計は%d\n", add(a, b, c));
	printf("heikinは%.2f", see(a, b, c));

}
int add(int a, int b,int c)
{
	return(a + b + c);
}
float see(float a, float b, float c)
{
	return((a + b + c) / 3);
}

