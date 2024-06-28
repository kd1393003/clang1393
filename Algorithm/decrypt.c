#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i,k[21],n;
	char s[21];
	i = 0;
	n = 0;
	
	printf("•¶š“ü—Í");
	scanf("%s", &s[0]);
	srand(time(0));
	
	while (s[i] != '\0')
	{

		k[i] = rand() % 6;
		s[i] = s[i] + k[i];
		i++;
	}
	printf("i=%d\n", i);
	printf("ˆÃ†•¶š—ñ%s•\¦\n", s);
	printf("ˆÃ†‰»ƒL[‚Í\n");
	for ( n = 0; n < i; n++)
	{
		printf("%d", k[n]);
	}

}