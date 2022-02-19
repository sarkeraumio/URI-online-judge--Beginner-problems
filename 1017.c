///fuelspent

include<stdio.h>
int main()
{
    double timespent, avgspeed, disperlitre= 12, litre;

    while(scanf("%lf%lf",&timespent, &avgspeed)!=EOF)
    {

    litre = (timespent*avgspeed)/disperlitre;

    printf("%.3lf\n", litre);
    }

    return 0;
}
