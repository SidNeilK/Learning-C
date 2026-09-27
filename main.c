#include <stdio.h>
#include <stdbool.h>
#include <string.h> 
// for strlen function used to remove newline character from the end of the string
#include <math.h>
// standard library for boolean type
// telling processor to get standard input/output library
int main() {
    /*
    printf("I like donuts!\n");
    printf("They are delicious!\n");
    // 0 indicates successful execution

    This is a multi-line comment.

   // varibale - a reusable container for a value.
   // Behaves as if it were the value it contains.
   int age = 25;
   int year = 2026;
   float gpa = 3.5;
   double pi = 3.14159; // more memory/precision than float
   char grade = 'A'; //character type variable
   char name[] = "Sid"; //character array for storing a string
   bool isStudent = 1; //boolean type variable
   printf("I am %d years old.\n", age);
   printf("The year is %d\n", year);
   printf("My GPA is %.2f\n", gpa);
   printf("The value of pi is %.5f\n", pi);
   printf("My grade is %c\n", grade);
   printf("Hello %s\n", name);
   printf("I am a student: %s\n", isStudent ? "yes" : "no");
   if(isStudent) {
       printf("I am a student.\n");
   } else {
       printf("I am not a student.\n");
   }

   // arithmetic operations
   int x =2;
   int y = 3;
   int z=0;
   //z=x+y;
   //z=x-y;
   //z=x*y;
   //z=x/y; since working with integers, this will perform integer division
   //z=x%y; // modulus operation, gives the remainder of x divided by y
   printf("The sum of x and y is %d\n", z);

   int age_second =0;
   float gpa_second = 0.0f;
   char grade_second = '\0';
   char name_second[30] = ""; //max number of characters for the name
   // variables for storing user input
    printf("Enter your age: ");
    scanf("%d", &age_second);

    printf("Enter your GPA: ");
    scanf("%f", &gpa_second);

    printf("Enter your grade: ");
    scanf(" %c", &grade_second);

    getchar(); // consume the newline character left in the buffer after reading the grade

    printf("Enter your name: ");
    fgets(name_second, sizeof(name_second), stdin);
    name_second[strlen(name_second)-1]= '\0';// remove the newline character at the end of the string


   printf("You entered age: %d\n", age_second);
   printf("You entered GPA: %.2f\n", gpa_second);
   printf("You entered grade: %c\n", grade_second);
   printf("You entered name: %s\n", name_second);

   // perform some arithmetic operations with the user input
   int age_plus_one = age_second + 1;
   float gpa_times_two = gpa_second * 2;
   printf("Age plus one: %d\n", age_plus_one);
   printf("GPA times two: %.2f\n", gpa_times_two);
   printf("Name: %s Grade: %c\n", name_second, grade_second);
   */

   // MAD LIBS GAME
   /*
   char noun[50] = "";
   char verb[50] = "";
   char adjective1[50] = "";
   char adjective2[50] = "";

   //since scanf doesn't accept spaces, we will use fgets for reading the inputs
   printf("Enter a adjective: ");
   fgets(adjective1, sizeof(adjective1), stdin);
   adjective1[strlen(adjective1)-1]= '\0';// remove the newline character at the end of the string
   
   printf("Enter a noun(animal or person): ");
   noun[strlen(noun)-1]= '\0';// remove the newline character at the end of the string
   fgets(noun, sizeof(noun), stdin);

   printf("Enter a verb(ending with ing): ");
   fgets(verb, sizeof(verb), stdin);
   verb[strlen(verb)-1]= '\0';// remove the newline character at the end of the string

   printf("Enter a adjective: ");
   fgets(adjective2, sizeof(adjective2), stdin);
   adjective2[strlen(adjective2)-1]= '\0';// remove the newline character at the end of the string

   printf("Here is the Mad Libs story:\n");
   printf("The %s %s was %s and %s.\n", adjective1, noun, verb, adjective2);
   */

   /*
   // Useful math functions from math.h
   double x = 16.0;
   double y = 4.0;
   printf("Square root of x: %.2f\n", sqrt(x));
   printf("x raised to the power of y: %.2f\n", pow(x, y)); // x to power of y
   printf("Absolute value of x: %.2f\n", fabs(x));
   printf("Ceiling of x: %.2f\n", ceil(x));
   printf("Floor of x: %.2f\n", floor(x));
   printf("Round of x: %.2f\n", round(x));
   printf("Truncate of x: %.2f\n", trunc(x));
   printf("Exponential of x: %.2f\n", exp(x));
   printf("Logarithm of x: %.2f\n", log(x));
   printf("Sine of x: %.2f\n", sin(x));
   printf("Cosine of x: %.2f\n", cos(x));
   printf("Tangent of x: %.2f\n", tan(x));
   printf("Arc sine of x: %.2f\n", asin(x));
   printf("Arc cosine of x: %.2f\n", acos(x));
   printf("Arc tangent of x: %.2f\n", atan(x));

   printf("Enter the radius: ");
   double radius = 0.0;
   scanf("%lf", &radius);
   printf("Area of the circle: %.2f\n", M_PI * radius * radius);
   printf("Circumference of the circle: %.2f\n", 2 * M_PI * radius);
   printf("Surface area of the sphere: %.2f\n", 4 * M_PI * radius * radius);
   printf("Volume of the sphere: %.2f\n", (4.0/3.0) * M_PI * radius * radius * radius);

   // Compound interest calculator
   double principal = 0.0;
   double rate = 0.0;
   double time = 0.0;
   double timeCompounded = 0.0;
   printf("Enter the principal amount: ");
   scanf("%lf", &principal);
   printf("Enter the annual interest rate (in decimal): ");
   scanf("%lf", &rate);
   printf("Enter the time in years: ");
   scanf("%lf", &time); // time in years
   printf("Enter # of times interest is compounded per year: ");
   scanf("%lf", &timeCompounded); // how frequently interest is added per year
   double amount = principal * pow(1 + rate/timeCompounded, timeCompounded * time); // A=P(1+r/n)^(nt) with n=timeCompounded, nt time
   printf("Total amount after compound interest after %lf years: $%.2lf\n", time, amount);
   */
  
   // if statement = do code if true, if conditions is false don't do it
   int number = 10;
   if (number > 5) {
       printf("The number is greater than 5\n");
   }
   else {
       printf("The number is not greater than 5\n");
   }


   return 0;
}
