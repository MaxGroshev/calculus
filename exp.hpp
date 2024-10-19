#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
T exp_calc(T arg) {
    T sum  = 1;
    T term = 1;
    for (int iter = 1; ;iter++) {
        term = term * arg / iter;
        if (sum + term == sum) {
            break;
        }
        sum = sum + term;
    }
    return sum;
}
