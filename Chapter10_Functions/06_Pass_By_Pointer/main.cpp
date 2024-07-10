// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Pass By Pointer: 

    // How we can pass parameters to functions by pointers... // This is going to allow us to avoid the copies that we were experiencing, when we were passing parameters by value, like we have seen in the last lecture...:

        // Pass By Pointer: Syntax:

            // void say_age (int* age);

            // int main (int argc, char **argv) {
                // int age {23}; // local to this main function...

                // std::cout << "age - before: " << age << "&age: " << &age << std::endl;
                // say_age(&age); // argument... // In pass parameter to function by pointer, we'll use this "&" operator cause we'll pass the adress of the variable in pass parameters to functions by pointer case...
                // std::cout << "age - after: " << age << "&age: " << &age << std::endl;

                // return 0;
            // }

            // void say_age(int* age) // parameter... {
                // ++(*age); // Changing the original variable, by pointing to it through pointer and then dereferencing that pointer and changing the value in the original address. Outside age will get affected...
                // std::cout << "Abcde! You are " << *age << " years old. &age: " << &age // this &age was still showing the different address then outside age variables but still it chnaged the original value of outside age variable... << std::endl;
            // }

                