#include<stdio.h>
main()
{
	int a,b,c,ret;
	printf("aerg");
	ret = scanf("%d%d%d", &a, &b, &c);
	printf("%d\n%d\n%d\n%d\n", ret, a, b, c);
	printf("数値をもう一個(ctrl+z終了）");
	
	while(scanf("%d",&a)!=EOF){
		printf("数値：%d", a);
		printf("数値をもう一個(ctrl+z終了）");
	}
}