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
        ponto = 0;
        pos = 20;
        for (i=ad; i>=0; i--){
            if (ponto < 3){
                aux[pos] = dolar[i];
                ponto++;
                pos--;
            } else{
                aux[pos] = ',';
                ponto = 0;
                pos = pos - 1;
                i++;
            }
        }
        
        for (pos=pos + 1; pos<=20; pos++){
            printf("%c", aux[pos]);
        }
    }
    
    return 0;
}