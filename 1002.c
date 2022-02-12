#include<stdio.h>
int main()
{

    double A, pi = 3.14159, R;

    while(scanf("%lf",&R)!= EOF)
    {

        A= pi* R*R;

        printf( "A=%.4lf\n", A);
    }

    return 0;
}

