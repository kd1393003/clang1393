#include<stdio.h>
main()
{
	float no,k,g;
	printf("����");
	scanf("%f", &no);
	g = 0;
	k = 0;
	for (; no != -999;)
	{
		k++;
		g += no;
		printf("����");
		scanf("%f", &no);
	}
	if(g != 0){
		printf("���v��%f       ", g);
		printf("���ρ�%.2f", g / k);
	}
	
}