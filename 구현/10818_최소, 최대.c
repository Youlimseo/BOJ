#include<stdio.h>

int main()
{
	int num, i;  //반복제어
	int max, min, a;
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		scanf("%d", &a);
		if (i == 0)
		{
			max = a;
			min = a;
		}
		else if (a < min)
			min = a;
		else if (a > max)
			max = a;
	}
	printf("%d %d \n", min, max);
	return 0;
}