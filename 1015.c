#include <stdio.h>
#include <math.h>

int main (){

    double p1x, p1y;
    double p2x, p2y;
    double di;

    scanf("%lf, %lf", &p1x, &p1y);
    scanf("%lf, %lf", &p2x, &p2y);

    di = sqrt((p1x - p2x) * (p1x - p2x) + (p1y - p2y) * (p1y - p2y));

    printf("%.4lf\n", di);


}
