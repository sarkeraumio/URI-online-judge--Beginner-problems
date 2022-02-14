#include<stdio.h>

int main()

{
    double R, v, pi= 3.14159;

    while(scanf("%lf",&R)!=EOF)
    {

    v= (4/3.0)*pi*R*R*R;

    printf( "VOLUME = %.3lf\n", v);
    }

    return  0;
}
