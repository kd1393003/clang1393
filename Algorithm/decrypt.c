#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i,k[21],n;
	char s[21];
	i = 0;
	n = 0;
	
	printf("文字入力");
	scanf("%s", &s[0]);
	srand(time(0));
	
	while (s[i] != '\0')
	{

		k[i] = rand() % 6;
		s[i] = s[i] + k[i];
		i++;
	}
	printf("i=%d\n", i);
	printf("暗号文字列%s表示\n", s);
	printf("暗号化キーは\n");
	for ( n = 0; n < i; n++)
	{
		printf("%d", k[n]);
	}

}