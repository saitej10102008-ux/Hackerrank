#include <stdio.h>

int main(void)
{
    int n, sum1 = 0, sum2 = 0, diff = 0;

    printf("Enter n: \n");
    scanf("%d", &n);

    int arr[n][n];

    printf("Enter the elements: \n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("a%d%d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        sum1 = sum1 + arr[i][i];
        sum2 = sum2 + arr[i][n - i - 1];
    }

    diff = sum1 - sum2;

    if (diff < 0)
    {
        diff = -diff;
    }

    printf("%d", diff);

    return 0;
}
