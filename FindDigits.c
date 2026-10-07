#include <stdio.h> 
int main (void) { 
    int n, r, back, k=0; 
    printf("Enter n: \n");
    scanf("%d", &n); 
    back = n;
    while (n!=0) { 
        r = n % 10;
        if (r!=0 && back % r == 0) { 
            k++;
        }
        n = n / 10;
    }
    printf("%d", k);
} 
