// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// References:

    // References are a way you can set up alliances for your variables and have other variable names you can go through to modify that same variable...

        // int var 0x12ab(// address maybe) 33;(// value inside this var variable maybe)

            // var_alias; (// we can use this reference alias variable same as like the original variable declared at line 12 above maybe...) // alias variable that we can use to reference an original variable...

                // Declaring and using references:

                    // int int_value {45};
                    // double double_value {33.65};

                    // int& reference_to_int_value_1 {int_value}; // Assign through initialization...
                    // int& reference_to_int_value_2 = int_value; // Assign through assignment...
                    // double& reference_to_double_value_1 {double_value}; // Assign through initialization...

                    // You have to declare and initialize in one statement
                    // int& some_reference; // Error

                    // std::cout << "int_value: " << int_value << std::endl;
                    // std::cout << "double_value: " << double_value << std::endl;
                    // std::cout << "reference_to_int_value_1 " << reference_to_int_value_1 << std::endl;
                    // std::cout << "reference_to_int_value_2 " << reference_to_int_value_2 << std::endl;
                    // std::cout << "reference_to_double_value_1 " << reference_to_double_value_1 << std::endl;
                    // std::cout << "&int_value: " << &int_value << std::endl;
                    // std::cout << "&double_value: " << &double_value << std::endl;
                    // std::cout << "&reference_to_int_value_1: " << &reference_to_int_value_1 << std::endl;
                    // std::cout << "&reference_to_int_value_2: " << &reference_to_int_value_2 << std::endl;
                    // std::cout << "&reference_to_double_value_1: " << &reference_to_double_value_1 << std::endl;
                    // std::cout << "sizeof(int): " << sizeof(int) << std::endl;
                    // std::cout << "sizeof(int&): " << sizeof(int&) << std::endl;
                    // std::cout << "sizeof(reference_to_int_value_1): " << sizeof(reference_to_int_value_1) << std::endl;

                // Modify data through original variable:

                    // Modifying data directly: changes reflect even in references

                    // std::cout << std::endl; 
                    // std::cout << "Modifying data directly: " << std::endl; 
                    // double_value = 9.99;

                    // Printing out after modification of double_value:

                        // std::cout << "int_value: " << int_value << std::endl;
                        // std::cout << "double_value: " << double_value << std::endl;
                        // std::cout << "reference_to_int_value_1 " << reference_to_int_value_1 << std::endl;
                        // std::cout << "reference_to_int_value_2 " << reference_to_int_value_2 << std::endl;
                        // std::cout << "reference_to_double_value_1 " << reference_to_double_value_1 << std::endl;
                        // std::cout << "&int_value: " << &int_value << std::endl;
                        // std::cout << "&double_value: " << &double_value << std::endl;
                        // std::cout << "&reference_to_int_value_1: " << &reference_to_int_value_1 << std::endl;
                        // std::cout << "&reference_to_int_value_2: " << &reference_to_int_value_2 << std::endl;
                        // std::cout << "&reference_to_double_value_1: " << &reference_to_double_value_1 << std::endl;
                        // std::cout << "sizeof(int): " << sizeof(int) << std::endl;
                        // std::cout << "sizeof(int&): " << sizeof(int&) << std::endl;
                        // std::cout << "sizeof(reference_to_int_value_1): " << sizeof(reference_to_int_value_1) << std::endl;

                    // changes will also reflect in the original variable maybe when we modify value through refrences maybe...

                    // references are specially used working with functions and in some other file too maybe...
                        
                    