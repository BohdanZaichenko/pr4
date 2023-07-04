#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Zaichenko Bohdan IPZ-22008b\n");

    unsigned int n;
    printf("\nInput natural number n: \n");
    scanf("%u", &n);

    unsigned int count=0;
    for (unsigned int m=1; m<=n; m++) {
        if (n%m==n/m) {
            count++;
        }
    }

    printf("\nNumber of equal divisors %u: %u\n", n, count);

    return 0;
}
