#include<stdio.h>
int main()
{
	double A, B, C, I, J, K;
	double num;

	scanf("%lf %lf %lf", &A, &B, &C);
	scanf("%lf %lf %lf", &I, &J, &K);

	if (A / I < B / J)
	{
		if (A / I < C / K)
			num = A / I;
		else
			num = C / K;
	}
	else
	{
		if (B / J < C / K)
			num = B / J;
		else
			num = C / K;
	}
		
	A = A - (I * num);
	B = B - (J * num);
	C = C - (K * num);

	printf("%.7lf %.7lf %.7lf", A, B, C);
	return 0;
}