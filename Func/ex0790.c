#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int dice,i;
	srand(time(0)); 
	dice = rand() % 5 + 1;
	printf("���Ȃ��̉^����");
	for ( i = 0; i < dice; i++)
	{
	printf("��");
	}
	printf("�ł�");
}