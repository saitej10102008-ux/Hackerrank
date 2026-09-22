#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    int left=0, right = num - 1;
        while (left<right) {
        *(arr + left) = *(arr + right)^*(arr + left);
        *(arr + right) = *(arr + right)^*(arr + left);
        *(arr + left) = *(arr + right)^*(arr + left);
        left++;
        right--; 
        }
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
