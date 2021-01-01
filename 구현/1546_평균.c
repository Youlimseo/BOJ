#include<stdio.h>
#include<stdlib.h>

int main()
{
	float average=0;
	int temp;
	//N을 입력받고 그만큼 배열을 동적할당
	int N;
	scanf("%d", &N);
	int* score = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++)
		scanf("%d", &score[i]);
	//과목수N에 따른 최댓값
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N - 1; j++)
			if (score[j] < score[j + 1])
			{
				temp = score[j];
				score[j] = score[j + 1];
				score[j + 1] = temp;
			}
	//점수변경&합계
	for (int i = 0; i < N; i++)
		average += score[i];
	average = average / score[0] * 100;
	average /= N;
	printf("%f", average);
	free(score);
}