#include<stdio.h>
int main()
{

    double A, B, C, MEDIA;

    while(scanf("%lf %lf %lf",&A,&B,&C)!= EOF)
    {
        MEDIA = ((2*A)+(3*B)+(5*C))/10;

        printf( "MEDIA = %.1lf\n", MEDIA);
    }

    return 0;
}

