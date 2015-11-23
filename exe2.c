#include <stdio.h>
#include <stdlib.h>

int main () {
    
    int n, p1, p2, f;
    
    for (n=1000; n < 10000; n++){
        p1 = n / 100;
        p2 = n % 100;
        f = p1 + p2;
        if ((f * f) == n){
            printf("%d\n", n);
        }
    }   
    
	return 0;
}