#include<stdio.h>

int main()
{
	int buger[3], juice[2],set=2000;
	int i, j;
	for(i=0;i<3;i++)
		scanf(" %d", &buger[i]);
	for (i = 0; i < 2; i++)
		scanf(" %d", &juice[i]);
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			if (set > (buger[i] + juice[j] - 50))
				set = buger[i] + juice[j] - 50;
	printf("%d", set);
	return 0;
}