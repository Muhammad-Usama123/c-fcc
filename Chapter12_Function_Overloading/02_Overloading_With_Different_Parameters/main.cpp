// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Overloading With Different Parameters:

    // Max() Overloads:
        
        // int max (int a, int b) {
            // return ( a > b) ? a : b;
        // }

        /*
        // Can't overload on the return type. Compiler Error...:

        double max (int a, int b) {
            // return (a > b) ? a : b;
        }
        */


        // double max (double a, double b) {
        //     // return (a > b) ? a : b;
        // }
       
        // std::string_view max (std::string_view a, std::string_view b) {
        //     // return (a > b) ? a : b;
        // }

            // Parameter Differences:

                // Something in parameters should be different like datatype etc. then the 1st declared or defined function with the same name as the 1st function, when making function overloads of same name function:

                    // *) Order
                    // *) Number
                    // *) Types

            // Calling The Overloads:

                // int int_value1 {41};
                // int int_value2 {29};

                // double double_value1 {47.2};
                // double double_value2 {55.01};

                // std::string_view first {"Abcde"};
                // std::string_view second {"World!"};

                // std:: cout << "max (" << int_value1 << ", " << int_value2 << "): " << max (int_value1, int_value2) << std::endl;
                // std:: cout << "max (" << 5 << ", " << 7 << "): " << max (5, 7) << std::endl;
                // std:: cout << "max (" << double_value1 << ", " << double_value2 << "): " << max (double_value1, double_value2) << std::endl;
                // std:: cout << "max (" << first << ", " << second << "): " << max (first, second) << std::endl;
                // std:: cout << "max (goat, cat): " << max ("goat", "cat") << std::endl; // implicitly converts string literals into std::string_view