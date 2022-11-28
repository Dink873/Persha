#include <stdio.h>
#include <math.h>

int main()
{
    double x = 2.14;
    double y = 0.578;
    long double r;
    r = sin(pow(x, 2)) + pow(sin(pow(x, 3)), 2) + pow(sin(pow(y, 4)), 3);
    printf("r= %Lf", r);

}