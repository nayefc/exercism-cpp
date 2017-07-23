#include "difference_of_squares.h"

int squares::square_of_sums(int n) {
    int sum = 0;
    for (int i = 1 ; i <= n; i++) {
        sum += i;
    }
    return sum * sum;
}

int squares::sum_of_squares(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i*i;
    }
    return sum;
}

int squares::difference(int n) {
    return squares::square_of_sums(n) - squares::sum_of_squares(n);
}
