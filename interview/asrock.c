#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[5] = {1,2,3,4,5};
    int *p;
    for (p = a; p != &a[5]; p++){
        *p = *a + 99;
        printf("%d\n",*p);
    }
    return 0;
}
