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
	printf("*****現在の状態******\n");
	if (s & poison)
	{
		printf("毒\n");
	}
	if (s&sleep)
	{
		printf("睡眠\n");
	}
	if (s & paralusis)
	{
		printf("感電\n");
	}
	if (s & burn)
	{
		printf("炎上\n");
	}
	if (s & atkdown)
	{
		printf("攻撃ダウン\n");
	}
	if (s & atkup)
	{
		printf("通常アップ\n");
	}
	if (s & base)
	{
		printf("通常zyoutai\n");
	}
	printf("****************\n");
}
void cangeflag(UINT* s)
{
	int a;
	while (1)
	{
		printf("どの状態異常にしますか\n");
		printf("1:毒2:睡眠3:炎上4:感電5:攻撃ダウン6:攻撃アップ０：終了");
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
		printf("どの状態異常を解除しますか");
		printf("1:毒2:睡眠3:炎上4:感電5:攻撃ダウン6:攻撃アップ7:初期化０：終了");
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
