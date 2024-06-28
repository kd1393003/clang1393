#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int  data[11] = { 10,15,18,23,28,35,47,55,68,78,96 };
	int  w,l,h,mid;
	l = 0;
	h = 10;
	scanf("%d", &w);
	srand(time(0));
	
	while (l <= h)
	{
		mid = (l + h) / 2;

		if (w == data[mid])
		{
			break;
		}
		if (w>data[mid])
		{
			l = mid + 1;
		}
		if (w<data[mid])
		{
			h = mid - 1;
		}
	}
	if (l>h)
	{
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½");
	}
	else
	{
		printf("%d", data[mid]);
	}
}

