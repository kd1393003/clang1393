#include<stdio.h>
main()
{
	int i;
	char no[40], k[40], w[40];
	printf("������1����");
	scanf("%s", &no[0]);
	printf("������2����");
	scanf("%s", &k[0]);

	printf("moji1=%s  moji2=%s\n", no, k);
	printf("����ւ����\n");
	i = 0; 
	while (no[i] != '\0')
	{
		w[i] = no[i];
		i++;
	}
	w[i]= '\0';
	i = 0;
	while (k[i] != '\0')
	{
		 no[i]=k[i];
		i++;
	}
		no[i] = '\0';
	 i = 0;
	while (no[i] != '\0')
	{
		k[i] = w[i];
		i++;
	}
	 k[i]='\0';
	printf("moji1=%s  moji2=%s\n", no, k);
}