#include<stdio.h>
main()
{
	int a, g=0, i=0;
	printf("���l����͂��Ă�������");
	while (scanf("%d",&a) != EOF)
	{
		printf("�����F%d\n",a);
		g += a;
		i++;
		printf("���l����͂��Ă�������");
	}
	printf("���v�F%d   ", g);
	printf("���ρF%.2f", (float)g / i);

}