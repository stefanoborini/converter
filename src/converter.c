#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    double value = 0.0;

    for (int i = 0; i < 5; i++) {
        value = (rand() % 100 / 100.0);
        printf("%g\n", value);
    }
    return 0;
}
