#include <stdio.h>

int main(){
    int a[3];
    int b[3];
    int c[3];

    for(int i=0; i<3; i++){
        printf("&a[%p]\n",&a[i]);
    }
    for(int j=0; j<3; j++){
        printf("&b[%p]\n",&b[j]);
    }
    for(int k=0; k<3; k++){
        printf("&c[%p]\n",&c[k]);
    }
    return 0;
}
