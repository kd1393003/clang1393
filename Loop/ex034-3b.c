#include<stdio.h>
main()
{//�J�E���g�A�b�v�o�[�W����
	int no,k,su;
	printf("����");
		scanf("%d", &su);
		no = 1;
	do
	{
		k = 0;
		//���p�X�y�[�X�\��
		while (k < su - no)
		{
			k++;
			printf(" ");
		}
		k = 0;
		//*��\������
		while (k < no)
		{
			k++;
			printf("*");
		}
		printf("\n");
		no++;
	} while (su >= no);
}