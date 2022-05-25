// typedef struct node_t node_t;

// struct node_t {
//     int data;
//     node_t *left;
//     node_t *right;
// };

// typedef struct tree_t tree_t;

// struct tree_t {
//     node_t *root;
//     cmpFn cmp;
// };
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int* test = malloc(5 * sizeof(int));
    int* output = test;
    printf("%p %p \n",test,&test);
    test[0] = 1;
    test[1] = 2;
    *test = 7;
    test = test++;
    for (int i = 0; i < 5; i++){
        printf("%d\n",output[i]);
    }
    return 0;
}
