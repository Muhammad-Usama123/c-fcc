// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Pass By Reference:

    // How we can pass parameters to a function by reference...:

        // Pass By Reference: Syntax: // syntax is much cleaner than "pass by pointer's" syntax, if we want to change the original value through function...

            // void say_age (int& age);

            // int main (int argc, char **argv) {
                // int age {23}; // local to this main function...

                // std::cout << "age - before: " << age << "&age: " << &age << std::endl;
                // say_age(age); // argument... 
                // std::cout << "age - after: " << age << "&age: " << &age << std::endl;

                // return 0;
            // }

            // void say_age(int& age) // parameter... {
                // ++age; // Changing the original variable , cause here we are passing the value to this function's parameter through "pass by reference" syntax and refrence variable changes the value of original variable cause there addresses will be same maybe...
                // std::cout << "Abcde! You are " << age << " years old. &age: " << &age // same address as original variable... << std::endl;
            // }

                