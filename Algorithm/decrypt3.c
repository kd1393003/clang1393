#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i,k[21];
	char s[21];
	i = 0;
	
	
	printf("��������");
	scanf("%s", &s[0]);
	srand(time(0));
	
	while (s[i] != '\0')
	{

		printf("�Í��L�[����");
		scanf("%d", &k[i]);
		s[i] = s[i] - k[i];
		i++;
	}
	printf("i=%d\n", i);
	printf("����%s�\��\n", s);
	
	

}