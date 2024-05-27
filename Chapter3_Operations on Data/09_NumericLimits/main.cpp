// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Numeric Limits:

    // it is helpful in trying to understand the ranges for your types...

    // #include <limits> // library for using below functions: // There are more in cppreference.com

        // std::numeric_limits<T>::min() // in place of <T> we'll write the type type for which we want to know the min, max and lowest point... // This is going to represent the smallest positive number for our given type in place of <T>... // works on floating point numbers and integrals (integers integrals are maybe same)

        // std::numeric_limits<T>::max() // in place of <T> we'll write the type type for which we want to know the min, max and lowest point... // This is going to represent the maximum number for our given type in place of <T>... // works on floating point numbers and integrals (integers integrals are maybe same)

        // std::numeric_limits<T>::lowest() // in place of <T> we'll write the type type for which we want to know the min, max and lowest point... // This is going to represent the lowest negative number for our given type in place of <T>... // works on floating point numbers 

        // Other Facilities using <limits> library: // There are more in cppreference.com

        // std::numeric_limits<int>::issigned //  the number is signed or unsigned...

        // std::numeric_limits<int>::digits() // the number of digits we can represent in int type variables...

        