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

    // Variable Braced Initialization: // all types of variable declaration will work equally well Insha Allah... // these kinds of initialization also work on other variables. (other types of variables like float double etc. maybe).

        // int elephant_count; // here cause we didn't store any value in this variable so the compiler will store a garbage value in this variable... // A variable that is not initialized... // some compilers can put 0 value here maybe...

        // int lion_count {}; if we'll define an integer variable like this (like with curly braces with the variable name)  it will initialize it's value to 0 by default, or we can explicitly put the values that we want to store in this variable, we can write them in these curly braces like in line 26...

        // int dog _count {10}; Initializes to 10

        // int cat_count {15}; Initializes to 15

        // int domesticated_animals {dog_count + cat_count // expression } // initializer; // We can use expression as Initializer.. 

        // int bad_initialization {doesnt_exist1 + doesnt_exist2}; // Won't compile, the expression in the braces uses undeclared variables...  // it will give us compiler error.

        // int narrowing_conversion {2.9}; // 2.9 is of type double, with a wider range than int.ERROR OR WARNING... // fractional number can be stored in int type variable but because fractional numbers are usually bigger in size then integers so these long fractional numbers will may loose some data if we'll defined them in int type variables...... // C++ 20 will may not allow this...

    // Functional Variable Initialization: // paranthesis // almost same as Variable Braced Initialization but difference in last example (fractional number stored in int) in line 34 and line 46 // all types of variable declaration will work equally well Insha Allah...

        // int apple_count(5); 

        // int orange_count(10); 

        // int fruit_count (apple_count + orange_count); 

        // int bad_initialization (doesnt_exist3 + doesnt_exist4); 

        // int narrowing_conversion_functional (2.9); // Information lost. less safe than braced initializers... // implicit conversions... // it will turn fractional number into integer by chopping off the value after the point cause it will cross the 4 bytes integer memory limit. // will only store 2 means it will convert the fractional number into integer by chopping off value after point.

    // Assignment Initialization: // all types of variable declaration will work equally well Insha Allah...

        // int bike_count = 5; 

        // int truck_count = 10; 

        // int vehicle_count = bike_count + truck_count;

        // int narrowing_conversion_assignment = 2.9; // can chop of .9 from this value silently cause of memory limit cross, so it's safer to use braced initialization or braced notation.

    // use braced initialization for storing fractional numbers into int type variable cause if it will not be able to store this fractional number cause of memory limit cross, so it will through error during compilation and then we'll not store that fractional value into the int type variable...

// Size Of A Type In Memory:

    // each fundamental type has a size associated to it most times...

        // std::cout << "size of int: " << sizeof(int) << std::endl;
        // std::cout << "size of truck_count: " << sizeof(truck_count) << std::endl;

        // ints are mostly going to take 4 bytes...

    // Rules For Variable Names In C++:

        // must start with a letter (like a or b or c or .... z etc.) or an underscore... we can't start a variable name for example with a number.

        // after 1st character of variable name we can maybe really put anything like numbers, special characters etc. but like + sign we can't put it in variable name cause it maybe going to be confusing for the compiler...

        // Variable names are case sensitive in C++...

// problems section in terminal for problems our program can may face...

// // these kinds of initialization and maybe size check everything etc. also work on other variables. (other types of variables like float double etc. maybe).


    