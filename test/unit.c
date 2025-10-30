#include "test.h"

int main() {

    struct Point { int x, y; };
    struct Point a, b;
    a.x = 3;
    b = a;


    printf("OK\n");
    return 0;
}
