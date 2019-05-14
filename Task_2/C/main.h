#include "A/index.h"
#include "B/lib.h"
#pragma once

double MyMed(int a, int b, int c) {
    int minn = MyMin(a, b, c);
    int maxx = MyMax(a, b, c);
    double ans = (double(maxx) + minn) / 2;
    return ans;
}