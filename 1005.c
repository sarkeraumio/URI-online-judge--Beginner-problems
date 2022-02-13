#include<stdio.h>
int main()
{

    double A, B, MEDIA;

    while(scanf("%lf %lf",&A,&B)!= EOF)
    {

        MEDIA = ((3.5*A)+(7.5*B))/(3.5+7.5);
        printf( "MEDIA = %.5lf\n", MEDIA);
    }

    return 0;
}

