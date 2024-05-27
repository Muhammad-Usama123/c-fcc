// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Weird Integral Types:

    // Integral types less than 4 bytes in size don't support arithmetic operations like addition, subtraction, multiplication and division and maybe more...

    // Examples:

        // char // cause one byte in size // Integrals by using ASCII table maybe. // compilers will automatically convert them in int maybe to make it 4 bytes and then perform the arithmetic operations on it

        // short int // cause 2 bytes in size..... // compilers will automatically convert them in int maybe to make it 4 bytes and then perform the arithmetic operations on it

            // short int var1 {10}; // short int type variable maybe 2 bytes in size
            // short int var2 {20}; // short int type variable maybe 2 bytes in size

            // char var3 {40}; // char type variable maybe one byte in size...
            // char var4 {50}; // char type variable maybe one byte in size...

            // auto result1 = var1 + var2 // result type will be int cause the compiler will convert var1 and var2 into int 1st maybe cause there size is less than 4 bytes and thyen add them and this is because maybe processors are designed to do these arithmetic operations on the smallest integer type is int.

            // auto result1 = var3 + var4 // result type will be int cause the compiler will convert var1 and var2 into int 1st maybe cause there size is less than 4 bytes and thyen add them and this is because maybe processors are designed to do these arithmetic operations on the smallest integer type is int.

            // The same behaviour is present on other operators like bitwise shift operators (<< and >>).