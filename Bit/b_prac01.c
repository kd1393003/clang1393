#include<stdio.h>
#include<stdint.h>
#include<time.h>
#define skil_Num 3
#define mob_Num 3

typedef struct {
	char name[20];
	int type;
	int use_mp;
	int effect;
} skill;
typedef struct {
	char name[20];
	int hp;
	int atk;
	int def;
	UINT state;
} spec;
typedef struct {
	spec sp;
	int maxhp;
	int mp;
	skill skl[skil_Num];
} Chara;
typedef struct {
	spec sp;
	int rate;
} Mob;


enum bitstate
{
	base = 0,              //00000000
	poison = 1 << 0,     //00000001
	sleep = 1 << 1,      //00000001
	paralusis = 1 << 2,  //00000010
	burn = 1 << 3,       //00000100
	atkup = 1 << 4,      //00001000
	atkdown = 1 << 5,    //00010000
};

typedef unsigned int UINT;
void displaystatus(UINT s);
void cangeflag(UINT* s);
void clearflag(UINT* s);
main()
{
	UINT mystate = base;
	cangeflag(&mystate);
	displaystatus(mystate);
	clearflag(&mystate);
	displaystatus(mystate);
}
void displaystatus(UINT s)
{
	printf("*****���݂̏��******\n");
	if (s & poison)
	{
		printf("��\n");
	}
	if (s&sleep)
	{
		printf("����\n");
	}
	if (s & paralusis)
	{
		printf("���d\n");
	}
	if (s & burn)
	{
		printf("����\n");
	}
	if (s & atkdown)
	{
		printf("�U���_�E��\n");
	}
	if (s & atkup)
	{
		printf("�ʏ�A�b�v\n");
	}
	if (s & base)
	{
		printf("�ʏ�zyoutai\n");
	}
	printf("****************\n");
}
void cangeflag(UINT* s)
{
	int a;
	while (1)
	{
		printf("�ǂ̏�Ԉُ�ɂ��܂���\n");
		printf("1:��2:����3:����4:���d5:�U���_�E��6:�U���A�b�v�O�F�I��");
		scanf("%d", &a);
		if (a==0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s |= poison;
			break;
		case 2:
			*s |= sleep;
			break;
		case 3:
			*s |= burn;
			break;
		case 4:
			*s |= paralusis;
			break;
		case 5:
			*s |= atkdown;
			break;
		case 6:
			*s |= atkup;
			break;
		}
	}
}
void clearflag(UINT* s)
{
	int a;
	while (1)
	{
		printf("�ǂ̏�Ԉُ���������܂���");
		printf("1:��2:����3:����4:���d5:�U���_�E��6:�U���A�b�v7:�������O�F�I��");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
			switch (a)
			{
			case 1:
				*s &= ~poison;
				break;
			case 2:
				*s &= ~sleep;
				break;
			case 3:
				*s &= ~burn;
				break;
			case 4:
				*s &= ~paralusis;
				break;
			case 5:
				*s &= ~atkdown;
				break;
			case 6:
				*s &= ~atkup;
				break;
			case 7:
				*s = base;
			}
	}
}
