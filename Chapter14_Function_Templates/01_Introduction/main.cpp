// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Function Templates:

    // Function blueprints... // Function templates are a mechanism we have in C++ to set up blueprint for functions and have one point of control to set up the function, but the compiler is going to generate the actual function that gets called when it sees the function call, so this is going to solve the problem, we had before with function overloads...:

        // Code Repetition:

            // int max(int a, int b){
                // return (a > b) ? a : b; // repeating the code in body 2 times more below... // and for solving this problem maybe, there are funtion templates...
            // }
            
            // double max(double a, double b){
                // return (a > b) ? a : b; 
            // }
            
            // std::string_view max(std::string_view a, std::string_view b){
                // return (a > b) ? a : b; 
            // }

                // Function Blue Print:

                    // template <typename T>

                    // T maximum(T a, T b){
                        // return (a > b) ? a : b;
                    // } // Blue Print For Our Maximum Function and the compiler is going to use this blue print to generate an actual function, when we'll call this function...
            
            