#include<stdio.h>
int main()
{
    int H, N;
    long long arr[100][100], i, j, block;
    scanf("%d %d", &H, &N);
    block = H - N;
    if (block < 0)
        block = -block;
    for (i = 0; i < block + 1; i++)
    {
        if (i)
            arr[i][i - 1] = 0;

        for (j = i; j < block + 1; j++)
        {
            if (i)
                arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
            else
                arr[i][j] = 1;
        }

    }
    if (block == 0)
        arr[block][block] = 1;
    printf("%lld", arr[block][block]);
    return 0;
}