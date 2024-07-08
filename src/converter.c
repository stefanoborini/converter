#include <stdio.h>
#include <stdlib.h>
#include <uxhw.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        return 1;
    }
    double high;

    sscanf(argv[1], "%f", &high);

    double value1 = UxHwDoubleUniformDist(0.5, high);
    double value2 = UxHwDoubleUniformDist(0.5, high);
    printf("%g\n", value1 + value2);
    return 0;
}
