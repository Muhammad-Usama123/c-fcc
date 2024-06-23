// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Declaring And Initializing And Using Pointers:

    // int * p_number {}; can only store an address of int type variable, cause we explicitly mentioned int and then *... other types than int compiler error...// it will be intialize with a special address that denotes that these pointers are not pointing to anything yet cause we didn't write any value in "{}"..

    // double * p_fractional_number {}; can only store an address of double type variable, cause we explicitly mentioned double and then *... other types then double compiler error... // it will be intialize with a special address that denotes that these pointers are not pointing to anything yet cause we didn't write any value in "{}"..

    // Explicitly initialize to nullptr (nullptr means no address of variable is stored and it is a null pointer and is not pointing to anywhere and don't use pointers that contain nullptr as value and above pointers too at line 10 and 12 cause they are also not pointing to anywhere) in below examples at line 16 and 18:

    // int * p_number1 {nullptr}; // we can change the address and it's example  is at below line 39...

    // double * p_fractional_number1 {nullptr}; // we can change the address and it's example is at below line 39...

    // All pointer variables on a given system will have the same size...

    // the position of star when declaring a pointer doesn't matter whether you give space after mentioning pointer variable type and before putting * or not but good practice is whether to attach star "*" with the variable type without giving any space or with variable name without giving any space....

    // We can declare normal variables and pointers like in below example too:

        // int * p_number5{}, other_int_var{}; // "p_number5" is an int type pointer and "other_int_var" is a normal int type variable... // less readable code... // better to declare these variables in different lines... 

    // Assigning Data To Pointer Variables:

        // int int_var{43};
        // int *p_int_var {&int_var}; // "&" is the address of operator... // storing the address of above declared int type variable named "int_var" which is declared and initialized at above line 30 and in this line we are declaring a pointer variable and initializing it with the address of above declared variable named "int_var" which is at above line 30... 

    // You can also change the address stored in a pointer variable any time like in below example:

        // int int_var1 {65};

        // int_var1 = 126;

        // p_int_var = &int_var1; // Assigning a different address to above declared and initialized with an address pointer variable at above line 31...

        // we can't assign the address of different type normal variable to different type pointer variable otherwise compiler error...

        // it is adviced to initialize a pointer variable even intialize with an empty curly braces but initialize during the declaration of this pointer variable in the same statement, it will initialize this pointer variable with the zero equivalent of pointers variables and that happens to be the "nullptr"...

        // if we try to print the pointer value in console, the address of a variable inside it can be shown to us in different number types systems like hexadecimal, octal etc.

    // Dereferencing a Pointer:

        // act of reading something through a pointer... //means we can read the value stored in that address through pointer....

        // Example:

            // int* p_int2 {nullptr};
            // int int_data {56};
            // p_int2 = &int_data;

            // std::cout << *p_int2 << std::endl; // means we can put * with pointer variable to see the actual value stored in that address that is stored in this pointer variable... // Dereferencing a pointer...




