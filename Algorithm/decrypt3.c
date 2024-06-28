#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i,k[21];
	char s[21];
	i = 0;
	
	
	printf("•¶š“ü—Í");
	scanf("%s", &s[0]);
	srand(time(0));
	
	while (s[i] != '\0')
	{

		printf("ˆÃ†ƒL[“ü—Í");
		scanf("%d", &k[i]);
		s[i] = s[i] - k[i];
		i++;
	}
	printf("i=%d\n", i);
	printf("•œŒ³%s•\¦\n", s);
	
	

}