#include<stdio.h>
main()
{
	float no[3] = { 0.0,0.0,0.0 }, g;
	int k;
	for ( g = 0,k=0; k < 3; k++)
	{
		printf("”Žš“ü—Í");
		scanf("%f", &no[k]); 
		g += no[k];
	}
	printf("goukeiha%.2f", g);
	printf("goukeiha%.2f", g/k);
}