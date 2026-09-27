#include <stdio.h>
#include <stdbool.h>
#include <string.h> 
// for strlen function used to remove newline character from the end of the string
#include <math.h>
// standard library for boolean type
#include <windows.h> // windows
// telling processor to get standard input/output library
// typedef char myChar;
void birthday(int *age);
enum Day{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};
typedef enum{
    Success, Failure, Pending
}Status;
typedef struct {
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
}Student;
void connectStatus(Status status); // function prototype for connectStatus function
void happyBirthday(char name[], int age) {
    // with your parameters you can change the names and ages dynamically
    printf("Happy Birthday %s!\n", name);
    printf("You are now %d years old!\n", age);
}
int square(int number) {
    // list the data type of what 
    return number * number;
}
bool ageCheck(int age) {
    if (age >= 18) {
        return true;
    } else {
        return false;
    }
}
int getMax(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}
void hello(char name[], int age); // function prototype for hello function

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
    // int age = 0;
    // printf("Enter your age: ");
    // scanf("%d", &age);
    // if (age >= 18 && age < 65) {
    //     printf("You are an adult.\n");
    //     }
    // else if (age >= 65) {
    //     printf("You are a senior.\n");
    // }
    // else {
    //     printf("You are a minor.\n");
    // }

    // bool isAdult = true;
    // if (isAdult) {
    //     printf("You are an adult.\n");
    // } else {
    //     printf("You are a minor.\n");
    // }

    // char name[50] = "";
    // printf("Enter your name: ");
    // fgets(name, sizeof(name), stdin);
    // name[strlen(name) - 1] = '\0';
    // if (strlen(name) == 0) {
    //     printf("You entered an empty name.\n");
    // } else {
    //     printf("Hello, %s!\n", name);
    // }

    // 1:55 to 2:10

    //switches - is an alternative to using many if-else statements
    // more efficient when using fixed integer values

    // int dayOfWeek = 0;
    // printf("Enter the day of the week (M, T, W, Th, F, Sa, Su): ");
    // scanf("%d", &dayOfWeek);
    // switch (dayOfWeek) {
    //     case 'M':
    //         printf("Monday\n");
    //         break;
    //     case 'T':
    //         printf("Tuesday\n");
    //         break;
    //     case 'W':
    //         printf("Wednesday\n");
    //         break;
    //     case 'Th':
    //         printf("Thursday\n");
    //         break;
    //     case 'F':
    //         printf("Friday\n");
    //         break;
    //     case 'Sa':
    //         printf("Saturday\n");
    //         break;
    //     case 'Su':
    //         printf("Sunday\n");
    //         break;
    //     default:
    //         printf("Invalid day.\n");
    //         break;
    // }

    // nested if statements
    // float price = 10.0;
    // bool isStudent = true; //10% discount
    // bool isSenior = false; //20% discount

    // if (isStudent) {
    //     if (isSenior) {
    //         printf("You get a senior discount of 20%\n");
    //         printf("You get a student discount of 10%\n");
    //         price *= 0.7; // apply 30% discount
    //     }
    //     else {
    //         printf("You get a student discount of 10%\n");
    //         price *= 0.9; // apply 10% discount
    //     }
    // }
    //     else { if (isSenior) {
    //         printf("You get a senior discount of 20%\n");
    //         price *= 0.8; // apply 20% discount
    //     }
    //     else {
    //         printf("You get no discount\n");
    //     }
    // }
    // printf("Final price: $%.2lf\n", price);

    // logical operators && (AND), || (OR), ! (NOT)

    // functions - a reusable section of code that can be invoked "called". 
    // Arguments can be sent to a fnction so that it can use them
    // void - a function that does not return a value
    // arguments are what you send a function when you call it
    // parameters are what a function receives when it is called
    // char name[50] = "";
    // int age = 19;
    // printf("Enter your name: ");
    // fgets(name, sizeof(name), stdin);
    // name[strlen(name) - 1] = '\0';
    // printf("Enter your age: ");
    // scanf("%d", &age);

    // happyBirthday(name, age);

    // return - returns a value back to where you call a function
    // int x = square(2);
    // int y= square(3);
    // int z = square(4);
    // printf("x = %d, y = %d, z = %d\n", x, y, z);

    // int age =21;
    // if (ageCheck(age)) {
    //     printf("You are an adult.\n");
    // } else {
    //     printf("You are a minor.\n");
    // }

    // int max = getMax(5, 10);
    // printf("The maximum value is %d\n", max);

    // variale scope - refers to where a variable is accessible in your code.
    // Variables declared inside a function are local to that function.
    // Variables declared outside all functions are global and accessible throughout the program.   

    // function prototypes - proves the compiler w/ information about a function'a:
    // name, returns type, paramters before its actual definition.
    // enables type checking and allows functions to be used fore they're defined
    // improving readability and maintainability of the code/ preverts errors

    // hello("sid", 30);

    // while loop - continue some code while the condition is true
    // condition must be true for us to enter while loop
    // do-while loop - execute code at least once, then continue while condition is true

    // for loop - iterate a block of code a specific number of times
    // for(initilization; condition; update)
    // for (int i = 0; i < 10; i++) {
    //     Sleep(1000); // pause for 1 second (1000 milliseconds)
    //     printf("Iteration %d\n", i);
    // }

    // break - exit a loop prematurely (STOP)
    // continue - skip current cucle of a loop (SKIP)
    // for (int i = 1; i < 10; i++) {
    //     if (i == 4) {
    //         // continue;
    //         break;
    //     }
    //     printf("Iteration %d\n", i);
    // }
    
    // nested loops - loops inside loops
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         printf("i = %d, j = %d\n", i, j);
    //     }
    //     printf("\n");
    // }

    // array - a fixed-size collection of elements of the same data types
    // similar to a variable, but it can hold multiple values of the same type
    // int numbers[] = {1, 2, 3, 4, 5, 6}; // index: 0,1,2,3,4...
    // access array elements using their index
    // printf("First element: %d\n", numbers[0]);
    // printf("Last element: %d\n", numbers[4]);

    // char grade[] = {'A', 'B', 'C', 'D', 'F'};
    // char name[] = "Sidd Kumar";
    // int size = sizeof(numbers) / sizeof(numbers[0]);
    // this gives the number of elements in the array
    // for (int i = 0; i < sizeof(name) - 1; i++) {
    //     printf("%c", name[i]);
    // }
    // for (int i = 0; i < size; i++) {
    //     printf("%d\n", numbers[i]);
    // }
    // int score[5] = {0}; // initialize all elements to 0
    // for (int i = 0; i < 5; i++) {
    //     printf("Enter score:");
    //     scanf("%d", &score[i]);
    // }
    // for (int i = 0; i < 5; i++) {
    //     printf("%d\n", score[i]);
    // }
    // c doesn't clear memory automatically, so be careful with arrays and pointers

    // 2D array - an array where each element is an array itself
    // array[][] = {{}, {} ,{}};
    // char numpad[][3] = {
    //     {'1', '2', '3'},
    //     {'4', '5', '6'},
    //     {'7', '8', '9'},
    //     {'*', '0', '#'}
    // }; // multi-dimensional array, have to list the number of columns
    // for (int i = 0; i < 4; i++) { // rows
    //     for (int j = 0; j < 3; j++) { // columns
    //         printf("%c ", numpad[i][j]);
    //     }
    //     printf("\n");
    // }

    // Array of strings
    // char fruits[][10] = {"apple", "banana", "cherry", "orange"};
    // int size = sizeof(fruits) / sizeof(fruits[0]);
    // 2D array of characters, all the data is stored contiguously in memory
    // With an array of strings, each of these strings can be stored in different memory locations
    // fruits[0][0] = 'e'; // change the first character of the first string
    // fruits[0][4] = 'A';
    // for (int i = 0; i < size; i++) {
    //     printf("%s\n", fruits[i]);
    // }

    // ternary operator ? = short form of if-else
    // (condition) ? value_if_true : value_if_false;

    // typedef - reserved keyword that gives an existing data type a "nickname"
    // Helps simplify complex types and improves code readability
    // typede existing_type new_name
    // you don't have to specify the size of the array when using typedef with arrays

    // enums - a user-defined datatype that consists
    // of a set of named integer constants
    // benefit: replaces numbers with readable names

    // enum Day today = Monday;
    // printf("Today is day %d\n", today);
    // prints numbers corresponding to the enum values
    // Status status = Success;
    // connectStatus(status);

    // struct - a custom container that holds multiple pieces
    // of related information.
    // Similar to Objects in other languages

    // Student student1 = {"John Doe", 20, 3.5, true};
    // printStudent(student1);
    // to access a member of the struct, use the dot operator (.)
    // strcpy() is used to copy one string to another

    // array of structs - array where each element contains a struct {}
    // helps organize and groups related data together

    // Pointer - a veriable that stores the memory address of another variable
    // Benefit: They help avoid wasting memory by allowing you to pass
    // the address of a large data structure instead of copying the entire data.  
    
    int age = 25;
    int *pAge = &age;
    birthday(pAge);
    // x      → value
    // &x     → address of x
    // p      → stores an address
    // *p     → value at that address

    printf("Your age is now %d.\n", age);
   return 0;
}
void birthday(int *age){
    (*age)++;
    // all our function wants is an address to an integer variable
    //what we are doing here is incrementing the address of age
    // we need to dereference it using the dereference operator
    // functions in c are pass-by-value, meaning the original variable is not modified inside the function
    // what we need to do is pass by reference using a pointer
}
void hello(char name[], int age){
    printf("Hello %s!\n", name);
    printf("You are %d years old.\n", age);
}
void connectStatus (Status status){
    switch(status){
        case Success:
            printf("Connection successful.\n");
            break;
        case Failure:
            printf("Connection failed.\n");
            break;
        case Pending:
            printf("Connection pending.\n");
            break;
        default:
            printf("Unknown status.\n");
            break;
    }
}
void printStudent(Student student){
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);
    printf("Full-Time: %s\n", student.isFullTime ? "Yes" : "No");
}
