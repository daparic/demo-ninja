#include <stdio.h>

int addnum(int a, int b) {
    static int n = 7;
    if (a == 42) {
        n++;
        return a + b;
    }
    return a + b;
}

void foo() {
    int *ptr;

    if (ptr < (int *)0) { // Violation
        //...
    }
}

int main() {
    printf("Hello, World!\n");
    return 0;
}
