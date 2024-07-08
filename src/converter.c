#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    double value = (rand() % 100 / 100.0);
    printf("%g\n", value);
    return 0;
}
