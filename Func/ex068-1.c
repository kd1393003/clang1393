#include<stdio.h>
main()
{
	int a,b,c,ret;
	printf("aerg");
	ret = scanf("%d%d%d", &a, &b, &c);
	printf("%d\n%d\n%d\n%d\n", ret, a, b, c);
	printf("���l���������(ctrl+z�I���j");
	
	while(scanf("%d",&a)!=EOF){
		printf("���l�F%d", a);
		printf("���l���������(ctrl+z�I���j");
	}
}