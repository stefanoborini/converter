#include <stdio.h>
#include <stdlib.h>
#include <uxhw.h>

int main() {
    double value1 = UxHwDoubleUniformDist(0.5, 1.0);
    double value2 = UxHwDoubleUniformDist(0.5, 1.0);
    printf("%g\n", value1 + value2);
    return 0;
}
