#include <stdio.h> 
int main (void) { 
    char str[1000], count[10]={0};
    scanf("%999s", str);
   for (int i = 0; str[i] != '\0'; i++) { 
        for (int j=0; j<10; j++) { 
        if (str[i]=='0'+j) { 
            count[j]++;
        } 
        }
    } 
    for (int i=0; i<10; i++) { 
    printf("%d ", count[i]);
    }
    return 0;
}
