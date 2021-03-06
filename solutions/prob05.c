#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

bool divByAll(int in, int n) {
    for(int i = 1; i <= n; i++) {
        if(in % i != 0) return false;
    }
    return true;
}

int smallestPos(int n) {
    // finds the smallest positive integer from 1 to n
    for(int i = 1; i <= INT_MAX; i++) {
        if(divByAll(i, n)) return i;
    }
    return -1;
}

int main() {
    printf("%d\n", smallestPos(20));
    return 0;
}