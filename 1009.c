#include<stdio.h>
int main()
{

    double SALARY, TVALUE, TOTAL;
    char A;

    scanf("%s", &A );
    while(scanf("%lf %lf",&SALARY ,&TVALUE )!= EOF)
    {

        TOTAL=  (SALARY + (TVALUE*.15));

        printf("TOTAL = R$ %.2lf\n", TOTAL);
    }

    return 0;
}


