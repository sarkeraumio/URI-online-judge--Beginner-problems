#include<stdio.h>

int main()
{

    int A, B, NUMBER;
    double C, SALARY;


    while(scanf("%d %d %lf", &A, &B, &C )!= EOF)

    {

        NUMBER = A;
        SALARY= B*C;

    printf("NUMBER = %d\n", NUMBER);
    printf("SALARY = U$ %.2f\n", SALARY);
    }

    return 0;
}
