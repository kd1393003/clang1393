#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int k, f;
	srand(time(0));
	k = rand() % 3 + 1;
	printf("�����o���H�P���O�[�@2���p�[�@�R���`���L\n");
		scanf("%d", &f);
		printf("�v���C���[��");
		switch (f)
		{
		case  1:
			printf("�O�["); break;
		case  2:
			printf("�p�["); break;
		case  3:
			printf("�`���L"); break;
		default:
			printf("era-"); break;
		}
		printf("�ł�\n");

		printf("�R���s���[�^�[��");
		switch (k)
		{
		case  1:
			printf("�O�["); break;
		case  2:
			printf("�p�["); break;
		case  3:
			printf("�`���L"); break;
		}
		printf("�ł�\n");
		





	if (f == 1)
	{
		switch (k)
		{
			case  1 :
				printf("������"); break;
			case  2 :
				printf("����"); break;
			case  3 :
				printf("����"); break;
		}
	}
	else
	{
		if (f == 2)
		{
			switch (k)
			{
			  case  1 :
				  printf("����"); break;
			  case  2 :
				  printf("������"); break;
			  case  3 :
				  printf("����"); break;
			}
		}
		else
		{
			if (f == 3)
			{
				switch (k)
				{
					case 1 :
						printf("����"); break;
					case  2 :
						printf("����"); break;
					case  3 :
						printf("������"); break;
				}
			}
			else
			{
				printf("�G���[");
			}
		}
	}
}



	