#include <cstdio>
int main()
{
    double a, b = 0;
    scanf("%lf", &a);
    if (a <= 100000)
    {
        b += a * 0.1;
    }
    if (100000 < a && a <= 200000)
    {
        b += (a - 100000) * 0.075;
    }
    if (200000 < a && a <= 400000)
    {
        b += (a - 200000) * 0.05;
    }
    if (400000 < a && a <= 600000)
    {
        b += (a - 400000) * 0.03;
    }
    if (600000 < a && a <= 1000000)
    {
        b += (a - 600000) * 0.015;
    }
    if (a > 1000000)
    {
        b += (a - 1000000) * 0.01;
    }
    printf("%.2lf", b);
    return 0;
}
