#include<stdio.h>
main()
{
	char deta[15] = "language" ;
	char deta2[15];
	char *a, *b,k;
	a = deta;
	b = deta2;
	printf("deta[ ]=%s\n", a);
	printf("���������");
	scanf("%s", &k);
	printf("�������ʂ�");
	int i = 0;
	while (*(a+i))
		{
			if (*(a+i) == k)
			{
				printf("%d ",i+1);
			}
			i++;
		}
	printf("�����ڂł�");
}