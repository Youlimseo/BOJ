#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int N, arr[101], person, gender, location;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	scanf("%d", &person);
	while (person--)
	{
		scanf("%d %d", &gender, &location);
		
		if (gender == 1)
		{
			for (int i = 0; i < N; i++)
				if ((i+1)  % location == 0)
					arr[i] = !arr[i];
		}
		else if (gender == 2)
		{
			location--;
			arr[location] = !arr[location];
			for (int i = 1; location - i>-1&&location+i<N&&arr[location - i] == arr[location + i]; i++)
			{
				arr[location - i] = !arr[location - i];
				arr[location + i] = !arr[location + i];
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
		if ((i+1) % 20 == 0)
			printf("\n");
	}
}