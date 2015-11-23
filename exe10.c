#include <stdio.h>
#include <stdlib.h>

int main () {
    
    char palavra[15];
    
    int i, t, f;
    
    fgets(palavra, 16, stdin);
    
    t = 0;
    
    while(palavra[t] != '\n'){
        t++;
    }

    t--;

    f = 1;
    
    for(i=0; i<(t/2) && f == 1; i++){
        if (palavra[i] != palavra[t-i]){
            f = 0;
        }
    }
    
    if (f == 1){
        printf("A PALAVRA E PALINDROMA");
    } else {
        printf("A PALAVRA NAO E PALINDROMA");
    }
    
	return 0;
}