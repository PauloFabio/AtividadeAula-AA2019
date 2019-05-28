#include <stdio.h>
#include <stdlib.h>

#define MAX 20

int main(){
    int vetAux[MAX];

    vetAux[0] = 1;
    vetAux[1] = 1;

    int i, n;
    n = 6;
    //scanf()

    for(i=2; i<=n; i++)
        vetAux[i] = i * vetAux[i-1];


    printf("fat de %d = %d ", n, vetAux[n]);

    return 0;
}
