#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i;
	char s[21], k[21];
	i = 0;
	
	
	printf("文字入力");
	scanf("%s", &s[0]);
	srand(time(0));
	printf("暗号キー入力");
	scanf("%s", &k[0]);
	while (s[i] != '\0')
	{
		s[i] = s[i] - (k[i]-'0');
		i++;
	}
	printf("i=%d\n", i);
	printf("復元%s表示\n", s);
	
	

}