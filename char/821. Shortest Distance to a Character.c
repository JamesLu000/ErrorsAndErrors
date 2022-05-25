#include <stdio.h>

int main(int argc, char const *argv[])
{
    char s[10] = "abcde";
    char* i;
    printf("%i",sizeof(s));
    printf("\n%i %i\n",sizeof(int),sizeof(s[3]));
    for (i = s; i != &s[sizeof(s)]; i++){
        printf("%c\n%p",*i,i);
    }
    return 0;
}
