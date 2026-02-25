#include <stdio.h>

int main(){
    int a[5];
printf("&a[%p]\n", &a[-1]);
printf("&a[%p]\n", &a[5]);
}
