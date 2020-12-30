#include<stdio.h>

int main()
{
	int num, Num,i;
	scanf_s("%d", &num);
	Num = ((num / 10) + (num % 10)) % 10 + (num % 10) * 10;
	for (i = 1; num != Num; i++)
	{
		Num = ((Num / 10) + (Num % 10)) % 10 + (Num % 10) * 10;
	}
	printf("%d", i);
}