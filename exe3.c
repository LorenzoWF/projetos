//PERGUNTAR QUANDO QUE ACABA E SOBRE A CONFIRMACAO, E SE DER EMPATE????
#include <stdio.h>
#include <stdlib.h>

int main (){
    
    int i, alibaba, alcapone, branco, nulo, num, f;
    
    char conf;
    
    alibaba = 0;
    alcapone = 0;
    branco = 0;
    nulo = 0;
    
    printf("ELEICOES DA ZUEIRA\n\n");    
    
    for (i=0; i<10; i++){
        printf("DIGITE O NUMERO DE SEU CANDIDATO\n");
        scanf("%d", &num);
        f = 1;
        if (num == 83){
            printf("CANDIDATO ALIBABA\nPARA CONFIRMAR DIGITE y, PARA CANELAR E ESCOLHER OUTRO CANDIDATO DIGIE n\n");
            scanf(" %c", &conf);
            if (conf == 'y'){
                alibaba++;
            } else {
                f = 0;
            }
        } else if (num == 93){
            printf("CANDIDATO ALCAPONE\nPARA CONFIRMAR DIGITE y, PARA CANELAR E ESCOLHER OUTRO CANDIDATO DIGIE n\n");
            scanf(" %c", &conf);
            if (conf == 'y'){
                alcapone++;
            } else {
                f = 0;
            }     
        } else if (num == 0){
            printf("VOTO EM BRANCO\nPARA CONFIRMAR DIGITE y, PARA CANELAR E ESCOLHER OUTRO CANDIDATO DIGIE n\n");
            scanf(" %c", &conf);
            if (conf == 'y'){
                branco++;
            } else {
                f = 0;
            }
        } else {
            printf("VOTO NULO\nPARA CONFIRMAR DIGITE y, PARA CANELAR E ESCOLHER OUTRO CANDIDATO DIGIE n\n");
            scanf(" %c", &conf);
            if (conf == 'y'){
                nulo++;
            } else {
                f = 0;
            }
        }
        
        if (f == 1){
            printf("VOTO CONFIRMADO\n\n");
        } else{
            printf("VOTO CANCELADO\n\n");
            i--;
        }
    }
    
    printf("\nRELATORIO DA VOTACAO\n");
    printf("NUMERO DE VOTOS NULOS: %d  NUMERO DE VOTOS EM BRNACOS: %d\n", nulo, branco);
    printf("NUMERO DE VOTOS DE ALIBABA: %d  NUMERO DE VOTOS DE ALCAPONES: %d\n", alibaba, alcapone);
    
    if (alibaba > alcapone){
        printf("ALIBABA E O VENCEDOR DA ELEICAO\n");    
    } else if (alibaba == alcapone){
        printf("TEMOS UM EMPATE\n");
    } else {
        printf("ALCAPONE E O VENCEDOR DA ELEICAO\n");
    }
    
    return 0;
}