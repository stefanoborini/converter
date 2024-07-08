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

    double amount;

    sscanf(argv[1], "%lf", &amount);

    if (!strncmp(argv[2], "uniform", strlen("uniform"))) {
        sscanf(argv[3], "%lf", &low);
        sscanf(argv[4], "%lf", &high);

        conversion_rate = UxHwDoubleUniformDist(low, high);
    } else if (!strncmp(argv[2], "gaussian", strlen("gaussian"))) {
        sscanf(argv[3], "%lf", &mu);
        sscanf(argv[4], "%lf", &sigma);

        conversion_rate = UxHwDoubleGaussDist(mu, sigma);
    } else {
        printf("Unrecognised distribution");
        return 1;
    }
    printf("%g\n", amount * conversion_rate);
    return 0;
}
