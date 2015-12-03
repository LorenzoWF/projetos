#include <stdio.h>
#include <stdlib.h>

int main (){
    
    int n, v, x, y, a, r, l , c;
    
    scanf("%d", &n);
    
    int m[n][n];
    
    x = 0;
    y = 0;
    a = n;
    r = (n/2) + 1;
    
    for(v=0; v<(n/2) + 1; v++){
        
        for(l=x; l<a; l++){
            for (c=y; c<a; c++)   
            m[l][c] = r;
        }
        
        x++;
        y++;
        a--;
        r--;

    }
    
    for(l=0; l<n; l++){
        for (c=0; c<n; c++){
            printf("%d ", m[l][c]);
        }
        printf("\n");
    }
    
    return 0;
}