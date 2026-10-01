#include <stdio.h>

int main(void)
{
    int n, largest = 0, count = 0;

    printf("n: \n");
    scanf("%d", &n);

    int nums[n];

    printf("Enter elements: \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        largest = (nums[i] > largest) ? nums[i] : largest;
    }

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == largest)
        {
            count++;
        }
    }

    printf("\n%d", count);

    return 0;
}
