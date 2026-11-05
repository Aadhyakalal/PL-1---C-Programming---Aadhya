/*Program (31) 
Solution (3): No Arguments, Returns a Value
*/
#include <stdio.h>
float areaTriangle()
{
float base, height;
printf("Enter base: ");
scanf("%f", &base);
printf("Enter height: ");
scanf("%f", &height);
return 0.5* base * height;

}
int main()
{
float area;
area = areaTriangleff();
printf("Area of Triangle = %f", area);
return 0;
}