//Sebastian Rivas
//UCFID: 5618598


#include <stdio.h>
#include <math.h>
#define PI 3.14159

//Establish functions
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double ask_for_user_input();

int main (int argc, char**argv) {
calculateDistance (); 
calculatePerimeter (); 
calculateArea (); 
calculateWidth (); 
calculateHeight ();
return 0;
}





double calculateDistance() {
   static double distance;
   double x1, y1, x2, y2;
   printf("Enter x1: ");
   x1 = ask_for_user_input();
   printf("Enter y1: ");
   y1 = ask_for_user_input();
   printf("Enter x2: ");
   x2 = ask_for_user_input();
   printf("Enter y2: ");
   y2 = ask_for_user_input();


   printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
   printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);


    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
   printf("The distance between the two points is %.2f\n", distance);


   return distance;
}


double calculatePerimeter() {
  static double distance;  // Access the static 'distance'
  
   double radius = distance / 2.0; // Radius is half the distance between the two points
   double perimeter = 2 * PI * radius;
   printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
   return 2.0; // Difficulty rating
}


double calculateArea() {
static double distance;  // Access the static 'distance'

   double radius = distance / 2.0; // Radius is half the distance between the two points
   double area = PI * pow(radius, 2);
   printf("The area of the city encompassed by your request is %.2f\n", area);
   return 2.0; // Difficulty rating
}


double calculateWidth() {
static double distance;  // Access the static 'distance'

   double radius = distance / 2.0; // Radius is half the distance between the two points
   double width = 2 * radius; // Diameter of the circle
   printf("The width of the city encompassed by your request is %.2f\n", width);
   return 1.0; // Difficulty rating
}


double calculateHeight() {
static double distance;  // Access the static 'distance'

   double radius = distance / 2.0; // Radius is half the distance between the two points
   double height = 2 * radius; // Diameter of the circle
   printf("The height of the city encompassed by your request is %.2f\n", height);
   return 1.0; // Difficulty rating
}
double ask_for_user_input() {
   double input;
   scanf("%lf", &input);
   return input;
}





