// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Storing Positive And Negative Numbers In int Type Variable:

    // int value1 {10}; // both will work
    // int value2 {-300}; // both will work

    // signed int: // signed by default... // we can put in both negative and positive numbers using this int modifier.

        // Formula For signed Range: // works on all datatypes maybe...

            // [(-2 to the power n-1) to (2 to the power n-1) - 1] // n means bits

        // Examples:

            // signed int value1 {10}; // both will work
            // signed int value2 {-300}; // both will work

    // unsigned int: // will only store positive number.. compiler error on negative number...

        // Formula For Unsigned Range: // works on all datatypes maybe...

            // 0 to (2 to the power n) - 1 // n means number of bits we have in our datatype...


        // Type With Modifier       Bytes In Memory     Range

            // unsigned int                4             [0 to 4,294,967,295]
            // signed int               4             [-2,147,483,648 to 2,147,483,647]

    // Memory Size Comparision Before And After Using int With Short And Long Modifiers:

        // Short: // 2 bytes

            // short short_var {-32768}; 
            // short int short_int {455};
            // signed short signed_short {122};
            // signed short int signed_short_int {-456};
            // unsigned short int unsigned_short_int {456};

        // Normal Int: // 4 bytes

            // int int_var {55}; 
            // signed signed_var {66};
            // signed int signed_int {77};
            // unsigned int unsigned_int {77};

        // Long: // 4 OR 8 bytes

            // long long_var {88}; 
            // long int long_int {33};
            // signed long signed_long {44};
            // signed long int signed_long_int {44};
            // unsigned long int unsigned_long_int {44};

        // long long: // 8 bytes

            // long long long_long_var {888}; 
            // long long int long_long_int {999};
            // signed long long signed_long_long {444};
            // signed long long int signed_long_long_int {1234};
            // unsigned long long int unsigned_long_long_int {1234};

    // Note: These modifiers only apply to integral types: those in which you can store decimal numbers (datatypes in which we can store decimal or whole numbers)...

