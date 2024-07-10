// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Function Declaration And Definition:

    // Separating Stuff:

        // Sometimes it's more flexible to split the function into it's header and body and keep the code for each in different places...

            // Function Declaration:

                // int max( int a, int b); // Function header Or Function Prototype...

                /* ... */

                // int main (int argc, char **argv){
                    // int a {3};
                    // int b {4};

                    // std::cout << "max(" << a << ", " << b << "): " << max(a, b) << std::endl;
                    // std::cout << "min(" << a << ", " << b << "): " << min(a, b) << std::endl;
                    // std::cout << "incr_mult(" << a << ", " << b << "): " << incr_mult(a, b) << std::endl;

                    // return 0;
                // }

                // Function Definition Or Implementation:

                    // int max (int a, int b) {
                        // if(a > b) 
                            // return a;
                        // else 
                            // return b; 
                    // }

                // The prototype needs to come before the function call in your file. Otherwise the compilation will fail... // The function prototype or whole function, any one of them must comes before main function otherwise C++ program will not work... // C++ program works even if we don't give names to its function prototype or maybe in whole function too and if we just give the datatype like int(giving datatype to parameters is important maybe) but the names of it's parameters could be maybe anything valid variable names and even without names maybe C++ program will work with maybe if we do this only with prototype or with maybe whole function too, the prototype example we've seen but not the whole function without parameter names and just giving parameter's datatypes, maybe it'll work too... update: in function definitions we need parameter's variable names and datatypes both maybe...