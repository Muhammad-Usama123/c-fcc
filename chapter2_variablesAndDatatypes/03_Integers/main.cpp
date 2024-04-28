// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Integers:

    // Integers are represented by "int" in C++:

        // Stores Decimals.
        // Typically occupies 4 bytes or more in memory...
        // Stores whole numbers.

// Variable:

    // A named piece of memory that you use to store specific types of data.

// Examples:

    // int elephant_count; // here cause we didn't stored any value in this variable so the compiler will store a garbage value in this variable...

    // int lion_count {}; if we'll define an integer variable like this (like with curly braces with the variable name)  it will initialize it's value to 0 by default, or we can explicitly put the values that we want to store in this variable, we can write them in these curly braces like in line 26...

    // int dog _count {10}; Initializes to 10

    // int cat_count {15}; Initializes to 15

    // int domesticated_animals {dog_count + cat_count}; // We can use expression as Initializer.. 

    // int bad_initialization {doesnt_exist1 + doesnt_exist2}; // Won't compile, the expression in the braces uses undeclared variables...  // it will give us compiler error.

    // int narrowing_conversion {2.9}; // 2.9 is of type double, with a wider range than int.ERROR OR WARNING... // fractional number can be stored in int type variable but because fractional numbers are usually bigger in size then integers so these long fractional numbers will may loose some data if we'll defined them in int type variables......

    