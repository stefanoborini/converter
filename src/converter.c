#include <stdio.h>
#include <stdlib.h>
#include <uxhw.h>

int main() {
    double value = UxHwDoubleUniformDist(0.5, 1.0);
    printf("%g\n", value);
    return 0;
}
