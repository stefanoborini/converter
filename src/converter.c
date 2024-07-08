#include <stdio.h>
#include <stdlib.h>
#include <uxhw.h>
#include <string.h>


int main(int argc, char *argv[]) {
    if (argc < 2) {
        return 1;
    }
    double low, high, mu, sigma;
    double conversion_rate;

    if (!strncmp(argv[1], "uniform", strlen("uniform"))) {
        sscanf(argv[2], "%lf", &low);
        sscanf(argv[3], "%lf", &high);

        conversion_rate = UxHwDoubleUniformDist(low, high);
    } else if (!strncmp(argv[1], "gaussian", strlen("gaussian"))) {
        sscanf(argv[2], "%lf", &mu);
        sscanf(argv[3], "%lf", &sigma);

        conversion_rate = UxHwDoubleGaussDist(mu, sigma);
    } else {
        printf("Unrecognised distribution");
        return 1;
    }
    printf("%g\n", conversion_rate);
    return 0;
}
