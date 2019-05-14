#include "lib.h"

int MyMax(int a, int b, int c) {
    int maxx = a;
    if (b > maxx)
        maxx = b;
    if (c > maxx)
        maxx = c;
    return maxx;
}