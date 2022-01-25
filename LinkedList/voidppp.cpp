#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    void *a;
    struct Foo { char bar[1024]; };
    *((Foo *)a) = Foo();
        // cout<<"hello";
    return 0;
}
