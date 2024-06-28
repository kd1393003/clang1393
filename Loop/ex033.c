#include<stdio.h>
main()
{
	float no,k,g;
	printf("”‚Í");
	scanf("%f", &no);
	g = 0;
	k = 0;
	for (; no != -999;)
	{
		k++;
		g += no;
		printf("”‚Í");
		scanf("%f", &no);
	}
	if(g != 0){
		printf("‡Œv%f       ", g);
		printf("•½‹Ï%.2f", g / k);
	}
	
}