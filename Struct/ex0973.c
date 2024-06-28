#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int k, f;
	srand(time(0));
	k = rand() % 3 + 1;
	printf("何を出す？１＝グー　2＝パー　３＝チョキ\n");
		scanf("%d", &f);
		printf("プレイヤーは");
		switch (f)
		{
		case  1:
			printf("グー"); break;
		case  2:
			printf("パー"); break;
		case  3:
			printf("チョキ"); break;
		default:
			printf("era-"); break;
		}
		printf("です\n");

		printf("コンピューターは");
		switch (k)
		{
		case  1:
			printf("グー"); break;
		case  2:
			printf("パー"); break;
		case  3:
			printf("チョキ"); break;
		}
		printf("です\n");
		





	if (f == 1)
	{
		switch (k)
		{
			case  1 :
				printf("あいこ"); break;
			case  2 :
				printf("負け"); break;
			case  3 :
				printf("勝ち"); break;
		}
	}
	else
	{
		if (f == 2)
		{
			switch (k)
			{
			  case  1 :
				  printf("勝ち"); break;
			  case  2 :
				  printf("あいこ"); break;
			  case  3 :
				  printf("負け"); break;
			}
		}
		else
		{
			if (f == 3)
			{
				switch (k)
				{
					case 1 :
						printf("負け"); break;
					case  2 :
						printf("勝ち"); break;
					case  3 :
						printf("あいこ"); break;
				}
			}
			else
			{
				printf("エラー");
			}
		}
	}
}



	