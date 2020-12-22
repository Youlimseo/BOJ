#include<stdio.h>
int Greska = 0;
void IsGreska(int* p, int num)
{
	if (p[num])
	{
		printf("GRESKA\n");
		Greska = 1;
	}
	else
	{
		p[num] = 1;
		p[0]--;
	}
}
int main()
{
	char S[1000];
	int P[14] = { 13,0, }, K[14] = { 13,0, }, H[14] = { 13,0, }, T[14] = { 13,0, };
	int num;

	scanf("%s", S, sizeof(S));
	for (int i = 0; S[i] != '\0'; i += 3)
	{
		num = (S[i + 1] - '0') * 10 + (S[i + 2] - '0');
		switch (S[i])
		{
		case 'P':IsGreska(P, num); break;
		case 'K':IsGreska(K, num); break;
		case 'H':IsGreska(H, num); break;
		case 'T':IsGreska(T, num); break;
		}
	}
	if (!Greska)
		printf("%d %d %d %d\n", P[0], K[0], H[0], T[0]);
}