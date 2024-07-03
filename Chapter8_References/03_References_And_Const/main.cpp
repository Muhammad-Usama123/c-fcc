// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// How the const keyword can be used with the references:

    // Const Reference:

        // Const reference...

            // std::cout << std::endl;
            // std::cout << "Const References: " << std::endl;

            // int age = 30;
            // const int& const_ref_age {age}; 

            // std::cout << "age: " << age << std::endl;
            // std::cout << "const_ref_age: " << const_ref_age << std::endl;

            // Try to modify through const reference

                // const_ref_age = 31; // Error...

    // Duplicate const reference behaviour with pointers:

        // Can achieve the same thing as const ref with pointer: const pointer to const data. Remember that a reference by default is just like a const pointer. All we need to do is make the const pointer point to const data...

            // const int* const const_ptr_to_const_age {&age};
            // *const_ptr_to_const_age = 32; // Error...

    // No such thing:

        // const int& const weird_ref_age {age}; // Error...

    // Const applies to reference variable name. Not to original variable:

        // const reference:

            // std::cout << std::endl; 
            // std::cout << "Const references: " << std::endl; 

            // age = 30; 

            // const int& const_ref_age {age};

            // std::cout << "age: " << age << std::endl;
            // std::cout << "const_ref_age: " << const_ref_age << std::endl;

            // Try to modify through const reference:

                // const_ref_age = 31; // Error...