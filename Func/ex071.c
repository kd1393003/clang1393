#include<stdio.h>
int add(int a, int b, int c);
float see(float a, float b, float c);
main()
{
	int a, b,c;
	printf("���������");
	scanf("%d%d%d", &a, &b,&c);
	
	printf("���v��%d\n", add(a, b, c));
	printf("heikin��%.2f", see(a, b, c));

}
int add(int a, int b,int c)
{
	return(a + b + c);
}
float see(float a, float b, float c)
{
	return((a + b + c) / 3);
}

