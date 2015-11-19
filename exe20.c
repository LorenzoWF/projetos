#include <stdio.h>
#include <stdlib.h>

int main (){
   
    int n, ad, i, ponto, pos; 
    char dolar[10], cents[2], aux[20];
    
    scanf("%d", &n);
    
    for (n=n; n>0; i--){
         __fpurge(stdin);
        fgets(dolar, 11, stdin);
        //__fpurge(stdin);
        //fgets(cents, 3, stdin);
        for (i=0; i<11; i++){
            if (dolar[i] == '\n'){
                ad = i - 1;
            }
        }
        printf("CHEGOU ATE AQUI\n");
        ponto = 0;
        pos = 20;
        for (i=ad; i>=0; i--){
            if (ponto < 3){
                aux[pos] = dolar[ad];
                ponto++;
                pos--;
                printf("IF\n");
            } else{
                aux[pos] = '.';
                ponto = 0;
                pos = pos - 1;
                i++;
                printf("ELSE\n");
            }
        }
        printf("CHEGOU ATE AQUI 2\n");
        printf("%d\n", pos);
        for (pos=pos + 1; pos<=20; pos++){
            printf("%c", aux[pos]);
        }
    }
    
    return 0;
}