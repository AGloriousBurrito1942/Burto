#include <iostream>
#include <iomanip>
#include <string>
void LessonTwo();
void LessonThree();
void LessonFour();
// Comment

/*Multi
Line
Comment

Lesson one - Below:*/
// - Main Lessons begin below:
int main() {
     int choice; /* This is so that when I run the program I can switch between lessons and not run the entire
     program everytime*/
      std::cout << "Which lesson do you want to run?\n";
    std::cout << "1 = Lesson 1 (main), 2 = Lesson 2, 3 = Lesson 3: ";
    std::cin >> choice;
    if (choice == 1) {
    std::cout << "Burritos" << '\n'; /* |std::cout means standard c output| |std::endl; means standard end line,
    '\n' means the same thing and is just better performance wise.| */
    std::cout << "C:" << std::endl;
    }   else if (choice == 2) {
        LessonTwo();
    }   else if (choice == 3) {
        LessonThree();
        else if (choice == 4) {
        LessonFour();
    } else {
        std::cout << "Invalid choice.\n";
    }
    return 0; /* If the program is run and reaches 0 there are no problems. If 1 is reached there is a problem
    with the program. */
    }
//Lesson two - Below (Variables and Basic Data Types)
void LessonTwo() {
int x = 5; /* Declaration (Declaring a Variable) (int means integer, x is just a variable.)
Variable declared as int, so it stores an integer. (here the integer is assigned as 5 (for example)) */
int y = 6;
int sum = x + y;
std::cout << x << '\n';
std::cout << y << '\n';
std::cout << sum << '\n';
/* The example above can only do integers or whole numbers, the example below will explain what a double is
 (number including decimal)*/
 std::cout << std::fixed << std::setprecision(5); /* this is so that the values come out properly and not in
 scientific notation, the number of precision changes how many numbers show up after the decimal point.*/
 double price = 10387239842.29847;
 double gpa = 2.5;
 double temp = 25.786;
 std::cout << price << std::endl;
 std::cout << gpa << std::endl;
 std::cout << temp << std::endl;
 /*Char Data Type: Single Character*/
 char Grade = 'A';
 char Initial = 'S';
 std::cout << Grade << '\n';
 std::cout << Initial << '\n';
 /*boolean Data Type (has only two states: true or false) this is applicable to anything that has only two states,
true or false.*/
 bool studentEnrolled = false;
 bool power = true;
 std::cout << studentEnrolled << '\n';
 std::cout << power << '\n';
 /*String Data Type (objects that represent a sequence of text)*/
 std::string name = "Burrito";
 std::string cow = "TenthDragon103";
 std::cout << "hello " << name << '\n';
 std::cout << "your gpa is " << gpa << " this year.";
}
 //Lesson Three:
 void LessonThree(){
/* The const keyword specifies that a variable's value is constant and tells the compiler to prevent anything
from modifying it (read only)
example: program to calculate circumference of a circle */
const double PI = 3.1459; // This is a constant variable, it doesn't change.
/* Since PI has a const, it will not change even if it is changed here, 420.2874. It will show up
as error, this adds data security*/
double radius = 14.3;
double circumference = 2 * PI * radius;
const int SPEED_LIGHT = 299792458;
const int WIDTH = 1920;
const int HEIGHT = 1080;
std::cout << circumference << "nanometers";
// 89.9727nanometers - answer
}
//Lesson Four:
void Lesson Four(){
    std::cout << "burrito is a nerd 🤓\n";
    // you formatted your main function wrong you goob its supposed to be:
    // int main(int argc, char* argv[]) {}
    // the contents of it aren't super important for you yet but they are used !!!
}