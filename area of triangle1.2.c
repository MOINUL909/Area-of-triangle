#include<stdio.h>
double trianglearea(double b, double h)
{
    return .5*b*h;
}
int main()
{
    double b,h;
    printf("Enter base:");
    scanf("%lf",&b);
     printf("Enter height:");
    scanf("%lf",&h);
    double area = trianglearea(b,h);
    printf("AREA %lf\n",area);
}
