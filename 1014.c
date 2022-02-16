#include <stdio.h>

int main()
{
    int totaldistance ;
    double totalfuelspent, distanceperlitre;

    while(scanf("%d%lf",&totaldistance,&totalfuelspent)!=EOF)
    {
    distanceperlitre = totaldistance/totalfuelspent;

    printf("%.3lf km/l\n", distanceperlitre);
    }
    return 0;
}
