#include <stdio.h>
#include <stdlib.h>
#define sum(x,y) ({x=x+y;return x;})

int main(int argc, char const *argv[])
{
    int x = 3, y = 5;
    // ({x=x+y;return y;});
    printf("00%i00",x);
    sum(x, y);
    /* code */
    return 0;
}
