#include <stdio.h>
#include <math.h>

int main() {

    double a = sqrt(9);
    double b = pow(2, 4);
    double c = round(3.14);
    double d = ceil(3.14);
    double e = floor(3.99);
    double f = fabs(-100.00);
    double g = log(100);
    double h = sin(45 * M_PI / 180);
    double i = cos(45 * M_PI / 180);
    double j = tan(45 * M_PI / 180);

    printf("\n%lf", a);
    printf("\n%lf", b);
    printf("\n%lf", c);
    printf("\n%lf", d);
    printf("\n%lf", e);
    printf("\n%lf", f);
    printf("\n%lf", g);
    printf("\n%lf", h);
    printf("\n%lf", i);
    printf("\n%lf", j);

    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\n\nEnter radius of a circle : ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * pow(radius, 2);

    printf("\nCircumference : %lf", circumference);
    printf("\nArea : %lf", area);

    double A;
    double B;
    double C;

    printf("\n\nEnter side A : ");
    scanf("%lf", &A);

    printf("\nEnter side B : ");
    scanf("%lf", &B);

    C = sqrt(pow(A, 2) + pow(B, 2));
    printf("Side C : %lf", C);

    return 0;
}
