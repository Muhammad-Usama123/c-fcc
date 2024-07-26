// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Fractional Numbers:

    // Fractional Numbers are also known as Floating Point Types in Technical Terms.

    // Fractional Numbers are used to represent numbers with fractional parts in C++ and many other languages.

    // Type             // Size             // Precision            // Comment

        // Float            4                       7                   -
        // double           8                       15                  Recommended Default.
        // long double      12 Or more              > double            
                            // (seen the 16 bytes size of long double in course video with gcc compiler maybe)

// Precision:

    // Precision is the number of bits we can represent with that type starting from the number infront of the decimal point.

    // 1.23456700001 // the precision in this number is 12. // we won't be able to store this in float... // we'll be able to store this number in double type variable cause it's precision is 15 and our number's precision comes under 15 which is 12. // we'll also count the number before decimal point for precision for our floating point numbers in C++.

    // declaration same as int.

    // double and long double can possibly be same, it depends upon compiler implementation.

    // setprecision:

        // std::cout << std::setprecision(20); // Control the precision from std::cout. // This needs to add library "#include <iomanip>"
        // std::cout << "number 1 is: " << number1 << std::endl; // 7 digits
        // std::cout << "number 2 is: " << number2 << std::endl; // 15'ish digits
        // std::cout << "number 3 is: " << number3 << std::endl; // 15+ digits

    // Precision Gone Wrong:

        // float number4 {192400023}; // this number precision count is 9 but we know that we can store only 7 digits in float, so means if we are getting data from the user in this variable if we'll use float and user will give this number that is in these curly braces whose precision is more than 7, so we can face problems (compiler error maybe) storing this number in this float type variable in braced initialization...

    // Scientific Notations:

        // We can also store scientific notations in floating point type numbers.

            // Example:

                // double number5 {192400023}; // this is fixed notation and below at lines 49, 50 and 52 are scientific notations cause we used e(exponential)...
                // double number6 {1.92400023e8}; // e is exponential means in this case 10 to the power of 8 multiplier to multiply with our floating point numbers... // moving the decimal point 8 digits to the right in this case...
                // double number7 {1.924e8}; // e is exponential means in this case 10 to the power of 8 multiplier to multiply with our floating point numbers... // moving the decimal point 8 digits to the right in this case...
                // double number8 {0.00000000003498};
                // double number9 {3.498e-11}; // e is exponential means in this case 10 to the power of 11 multiplier to multiply with our floating point numbers... // moving the decimal point -11 digits to the left in this case...


    // Note: We don't use the number systems like we've done for integers, there is a special system that is used to do that...

        // IEEE_754:

            // Floating point numbers memory representation...

            // https://en.wikipedia.org/wiki/IEEE_754

    // Things we can do with Floating Point Numbers that we can't maybe do with integers:

        // n(floating point number)/0   // Infinity(+/-) // If floating point number positive then positive infinity // If floating point number negative then negative infinity.

        // 0.0/0.0       // NaN // program will not crash maybe if something like this happens in program but few things we can't do with this for example we can't add them, its probably going to end up bad for our program maybe... 

// Notes: 

    // Remember the suffixes when initializing floating point variables, otherwise the default will be double...:

        // Examples:

            // float number1 {1.12345678901234567890f}; // f is the suffix for storing numbers as float number and necessary to use to clear that we are storing a float number... // if we don't put this f suffix in with the value, this is going to be interpreted as double and the compiler is going to try and turn this double value into a float by chopping off things that can't really fit in a float... // now cause it is a float number and it's precision is 7, it's going to only accurately store the 1st 7 numbers in the variable number1 and after that we are just going to have garbage because the computer can't really makes sense of whatever we have after 1st seven digits in memory...

            // double number2 {1.12345678901234567890}; // default assumed by the compiler...

            // long double number3 {1.12345678901234567890L}; // L is the suffix for storing a number as long double type number and necessary to use to clear that we are storing a long double type number... 


    // Double works well in many situations, so you will see it used a lot...