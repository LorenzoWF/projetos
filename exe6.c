#include <stdio.h>
#include <stdlib.h>

int main () {
    
    float vetor[10], a;
    int i, h, b;
      
    for (i=0; i<10; i++){
        scanf("%f", &vetor[i]);
        b = i;
        for (h = b - 1; h>=0; h--){
            if (vetor[b] < vetor[h]){
                a = vetor[b];
                vetor[b] = vetor[h];
                vetor[h] = a;
                b--;
            }
        }
    }
    
    for (i=0; i<10; i++){
        printf("%f ", vetor[i]);
    }
    
	return 0;
}