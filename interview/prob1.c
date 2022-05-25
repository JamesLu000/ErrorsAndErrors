#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int b[5] ={1,2,3,4,5};
    int *p = (int *)(&b+1);
    printf("%d,%d\n", *(b+1), (*p-1));
    int a[5]={1,2,3,4,5};
	int *ptr=(int *)(&a+1);
	printf("%d,%d\n",*(a+1),*(ptr-1));
    return 0;
}
