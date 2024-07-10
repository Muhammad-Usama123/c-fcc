// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Returning Data From Inside The Functions To Outside:

    // Returning from functions: (Default is by value)

        // int sum (int a, int b) {
            // int result = a + b;
            
            // std::cout << "In: &result(int): " << &result << std::endl;

            // return result;
        // }

        // int main (int argc, char **argv) {
            // int a {34};
            // int b {16};

            // int result = sum(a, b);

            // std::cout << "Out: &result(int): " << &result << std::endl;
            // std::cout << "sum: " << result << std::endl;

            // return 0;
        // }

            // Compiler Optimizations:

                // In modern compilers, return by value is commonly optimized out by the compiler when possible and the function is modified behind your back to return by reference, avoiding unnecessary copies!

                    // Compiler Optimizations to return by reference(Good For You!):

                        // std::string add_strings(std::string str1, std::string str2) {
                            // std::string result = str1 + str2;

                            // std::cout << "In: &result(std::string): " << &result << std::endl;
                        // }

                        // int main (int argc, char **argv) {

                            // std::string str_result = add_strings(std::string("Abcde"), std::string(" World!"));

                            // std::cout << "Out: &result(std::string): " << &str_result << std::endl;
                            // std::cout << "str_result: " << str_result << std::endl;

                            // return 0;
                        // }

        // don't mind passing arguments by value and giving the copies of values to function parameters for fundamental datatypes like int, double, char etc. cause they take little limited space in memory...