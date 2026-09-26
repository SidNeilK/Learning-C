#include <stdio.h>
#include <stdbool.h>
// standard library for boolean type
// telling processor to get standard input/output library
int main() {
    printf("I like donuts!\n");
    printf("They are delicious!\n");
    // 0 indicates successful execution
    /*
    This is a multi-line comment.
    */
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

   return 0;
}
