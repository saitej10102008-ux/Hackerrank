#include <stdio.h> 
int main (void) { 
    int n, minimum_distance, small1, small2, number; 
    printf("Enter a number: "); 
    scanf("%d", &n); 
    int size=2*n-1;
    
    for (int i=0; i<(size); i++) {
        for (int j=0; j<(size); j++) { 
            // calculate minimun distance 
            small1 = (i<j)?i:j; 
            small2 = ((size-1-i)<(size-1-j))?(size-1-i):(size-1-j); 
            minimum_distance = (small1<small2)?small1:small2;
            // number 
            number = n - minimum_distance; 
            // print
            printf("%d ",number);
        }
    printf("\n");
    }
    return 0;
}
