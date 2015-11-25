#include <stdio.h>
#include <stdlib.h>

int main (){
    
    float notas[2][15];
    
    int i, h, j, cont, maior, f;
    
    f = 1;
    
    for (i=0; i<2 && f == 1; i++){
        if (i == 0){
            for (h=0; h<15; h++){
                scanf("%f", &notas[i][h]);
                if (notas[i][h] < 0 || notas[i][h] > 10){
                    f = 0;
                }
            }
        } else{
            for (h=0; h<15; h++){
                cont = 1;
                 for (j=h + 1; j<15; j++){
                     if (notas[0][h] == notas[0][j]){
                         cont++;
                     }
                 }
                 notas[i][h] = cont;
            }
        }
    }
    
    if (f == 1){
        for (i=1; i<2; i++){
            for (h=0; h<15; h++){
                if (i == 1 && h == 0){
                    maior = notas[i][h];
                } else{
                    if (notas[i][h] > maior){
                        maior = notas[i][h];
                    }
                }
            }
        }
    
        for (i=1; i<2; i++){
            for (h=0; h<15; h++){
                if (notas[i][h] >= maior){
                    printf("MODA: %0.1f   N VEZES: %0.1f\n", notas[i - 1][h], notas[i][h]);
                }
            }
        }    
    }
    
    return 0;
}