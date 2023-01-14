#include <stdio.h>

//Obtain the area of a rectangle of dimensions given by the user
float getRectangleArea ()
{
  float base;
  float height;
  float area;

  printf("%s", "Type the base of the rectangle: ");
  scanf("%f", &base);
  printf("\n%s", "Type the height of the rectangle: ");
  scanf("%f", &height);

  area = base*height;

  return area;
} //end getRectangleArea

//Call functions and print results
int main ()
{
  float result;
  result = getRectangleArea();
  printf("\n%s", "Here is the area of your rectangle: ");
  printf("%f", result);
} //end main
