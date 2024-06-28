#include<stdio.h>
#include<string.h>
struct syouhinndeta
{
	char nemme[20];
	int tanka;
};
main()
{
	struct syouhinndeta s1, s2;
	strcpy(s1.nemme, "‚¦‚ñ‚Ò‚Â");
	s1.tanka = 30;
	s2 = s1;
	printf("%s", s1.nemme);
	printf("%d", s1.tanka);
	printf("%s", s2.nemme);
	printf("%d", s2.tanka);
}