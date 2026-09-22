#include <stdio.h> 
int main (void) { 
int n, remainder, sum=0;
scanf("%d", &n); 
do { 
    remainder = n%10; 
    n=n/10; 
    sum = sum + remainder; 
} while (n>0); 
printf("%d\n", sum);
    return 0; 
}
