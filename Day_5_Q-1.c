#include <stdio.h>
#include <math.h>
int main()
{
    float p, t, r, a, SI, CI;
    printf("Enter Principal Amount =");
    scanf("%f", &p);
    printf("Enter Rate Of Interest =");
    scanf("%f", &r);
    printf("Enter Time =");
    scanf("%f", &t);
    SI = (r * t * p) / 100;
    a = p * pow((1 + r / 100), t);
    CI = a - p;
    printf("Simple Interest = %.2f\n", SI);
    printf("Compound Interest = %.2f", CI);

    return 0;
}
