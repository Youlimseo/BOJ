#include<stdio.h>
#include<stdlib.h>
int main()
{
	int N, num;
	int i, j, diff;
	char str[100];
	scanf("%d", &N);
	num = N;
	while (N--)
	{
		int groupword = 0;
		scanf("%s", str, sizeof(str));
		if (strlen(str) == 1)
			continue;
		for (i = 0; str[i] != '\0'; i++)
		{
			for (j = 0; str[j] != '\0'; j++)
				if (str[i] == str[j])
				{
					diff = j - i;
					if (diff > 1)
						if (str[j - 1] != str[j])
						{
							groupword = 1;
							break;
						}
				}
			if (groupword)
			{
				num--;
				break;
			}
		}
	}
	printf("%d", num);
}