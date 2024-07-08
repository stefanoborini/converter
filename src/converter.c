#include <stdio.h>
#include <stdlib.h>
#include <uxhw.h>
#include <string.h>


int main(int argc, char *argv[]) {
    /* Converts a specified monetary amount in another according to a
       conversion rate specified with a given statistical distribution
       */
    double low, high, mu, sigma;
    double conversion_rate;
    double amount;

    if (argc < 5) {
        printf("Usage: %s amount distribution param1 param2", argv[0]);
        return 1;
    }

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
        printf("Unrecognised distribution specified");
        return 1;
    }
    printf(
        "Amount: %g. Conversion Rate: %g. Converted amount: %g\n",
        amount, conversion_rate, amount * conversion_rate
    );
    return 0;
}
