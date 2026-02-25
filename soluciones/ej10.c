#include <stdio.h>

int main(){
    int gigante[10000000];
    
    for(int i=0; i<6; i++){
        printf("&gigante[%p]\n",&gigante[i]);
    }
    return 0;
}
