#include<stdio.h>
#define sol_Num 3
typedef  struct 
{
	char wname[20];
	int bullet;
	float atk;
} waepon;
typedef  struct 
{
	char neme[20];
	int hp;
	waepon wpn;
} soldier;
void setinfo(soldier* s, char* filename);
void display(soldier* s);

main()
{
	soldier sols[sol_Num];
	setinfo(sols, "file04.txt");
	display(sols);
}
void setinfo(soldier* s, char* filename)
{
	int i = 0;
	FILE* fp;
	if (fp = fopen(filename, "r"))
	{
		for (i = 0; i < sol_Num; i++)
		{
			fscanf(fp, "%s%d%s%d%f", (s+i)->neme, &(s + i)->hp, (s + i)->wpn.wname, &(s + i)->wpn.bullet, &(s + i)->wpn.atk);
		}
		fclose(fp);
	}
}
void display(soldier* s)
{
	for (int i = 0; i < sol_Num; i++)
	{
		printf("%s:hp%d\n•Ší%s:Žc”%d:UŒ‚—Í%.2f\n", (s + i)->neme, (s + i)->hp, (s + i)->wpn.wname, (s + i)->wpn.bullet, (s + i)->wpn.atk);
	}

	
}
