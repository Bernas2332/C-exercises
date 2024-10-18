#include <stdio.h>

int main(){
const double PI = 3.145159;
double radius;
double circumference;
double area;

printf("\n Enter the radius of a circle: ");
scanf("%lf", &radius);

circumference = 2 * PI * radius;
area = PI * radius * radius;

printf("circumference:\n %lf", circumference);
printf("\narea:\n %lf", area);

return 0;
}