#include <stdio.h> 
int main (void) { 
    int n, sum=0, num;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &num);
        sum += num; 
    }

    printf("%d", sum);
    return 0;
}
