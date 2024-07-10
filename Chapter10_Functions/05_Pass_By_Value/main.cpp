// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Pass By Value:

    // Passing parameters to a function by value:

        // Pass By Value: Syntax:

            // void say_age (int age);

            // int main (int argc, char **argv) {
                // int age {23}; // local to this main function...

                // std::cout << "age - before: " << age << "&age: " << &age << std::endl;
                // say_age(age); // argument...
                // std::cout << "age - after: " << age << "&age: " << &age << std::endl;

                // return 0;
            // }

            // void say_age(int age) // parameter... {
                // ++ age; // Changing the copy. Outside age not affected...
                // std::cout << "Abcde! You are " << age << " years old. &age: " << &age << std::endl;
            // }

                // say_age() function call context:

                    // {
                        // int age_copy {age_value};
                        // use age_copy

                        // ...
                        // age copy goes out of scope
                    // }

