#include<stdio.h>
main()
{
	int i;
	char no[40], k[40], w[40];
	printf("文字列1入力");
	scanf("%s", &no[0]);
	printf("文字列2入力");
	scanf("%s", &k[0]);

	printf("moji1=%s  moji2=%s\n", no, k);
	printf("入れ替えると\n");
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