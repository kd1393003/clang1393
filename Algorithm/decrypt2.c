#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i;
	char s[21], k[21];
	i = 0;
	
	
	printf("��������");
	scanf("%s", &s[0]);
	srand(time(0));
	printf("�Í��L�[����");
	scanf("%s", &k[0]);
	while (s[i] != '\0')
	{
		s[i] = s[i] - (k[i]-'0');
		i++;
	}
	printf("i=%d\n", i);
	printf("����%s�\��\n", s);
	
	

}