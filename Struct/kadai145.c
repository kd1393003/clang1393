#include<stdio.h>
struct fruit
{
	char neme[20];
	int price;
	int poit;
	int number;
	int totar;
};
main()
{
	struct fruit kadai[] = { { "prise",300,5,3,0 }, { "grape",200,4,10,0 },{"water",1500,5,8,0} };
	for (int i = 0,k=0; i < 3; i++,k++ )
	{
		printf("¤•i–¼   %s    \n", kadai[i].neme);
		printf("‰¿Ši     %d     ", kadai[i].price);
		printf("‚¨‚·‚·‚ß“x  ");
		for (int g = 0; g < kadai[k].poit; g++)
		{
			printf("–");
		}
		printf("\n");
		printf("ŒÂ”    %d    \n", kadai[i].number);
		printf("‹àŠz    %d\n", kadai[i].number * kadai[i].price);
	}
}