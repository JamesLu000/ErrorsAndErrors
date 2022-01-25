#include <stdlib.h>
#include <stdio.h>

int a = 5;
void r(int);

int main(){
    int a = 10;
    r(a);
    printf("%i",a);
    return 0;
}

void r(int a){
    a = 15;
    printf("%i",a);
}
