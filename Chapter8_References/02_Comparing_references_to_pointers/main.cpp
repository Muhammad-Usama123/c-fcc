// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Comparing References To Pointers:

    // Differences Between Pointers And References:

        // *) References:

            // *) Don't use dereferencing for reading and writing...
            // *) Can't be changed to reference something else... 
            // *) Must be initialized at declaration...

        // *) Pointers:

            // *) Must go through dereference operator to read/write through pointed to value...
            // *) Can be changed to point somewhere else... (if it happens to be a non-const pointer)
            // *) Can be declared uninitialized (will contain garbage addresses)...

        // Declaration And Reading:

            // Declare pointer and reference:

                // double double_value {12.34};
                // double& ref_double_value {double_value}; // Reference to double_value
                // double* p_double_value {&double_value}; // Pointer to double_value

                    // Reading:

                        // std::cout << "double_value: " << double_value << std::endl;
                        // std::cout << "ref_double_value: " << ref_double_value << std::endl;
                        // std::cout << "p_double_value: " << p_double_value << std::endl;
                        // std::cout << "*p_double_value" << *p_double_value << std::endl; // this maybe bad for accessing value and reference is good for this maybe, not sure...

                    // Writing:

                        // Writing through pointer:

                            // std::cout << std::endl;
                            // std::cout << "Writing through pointer: " << std::endl;

                            // *p_double_value = 15.44;

                            // std::cout << "double_value: " << double_value << std::endl;
                            // std::cout << "ref_double_value: " << ref_double_value << std::endl;
                            // std::cout << "p_double_value: " << p_double_value << std::endl;
                            // std::cout << "*p_double_value: " << *p_double_value << std::endl;

                        // Writing through reference:

                            // std::cout << std::endl;
                            // std::cout << "Writing through reference: " << std::endl;

                            // ref_double_value = 18.44;

                            // std::cout << "double_value: " << double_value << std::endl;
                            // std::cout << "ref_double_value: " << ref_double_value << std::endl;
                            // std::cout << "p_double_value: " << p_double_value << std::endl;
                            // std::cout << "*p_double_value: " << *p_double_value << std::endl;

                    // Can't make a reference refer to something else:

                        // double double_value {12.34};
                        // double& ref_double_value {double_value}; // Reference to double_value...
                        // double other_double_value {100.23};

                            // This works, but it doesn't make ref_double_value reference other_double_value it merely changes the value referenced by ref_double_value to 100.23. Visualize this in slides...

                                // ref_double_value = other_double_value;

                            // If you change ref_double_value now, other_double_value stays the same proving that ref_double_value is not referencing other_double_value...

                                // ref_double_value = 333.33;

                    // A Pointer Can Point SomeWhere Else:

                        // A pointer can point somewhere else...

                            // std::cout << std::endl;
                            // std::cout << "A pointer can point somewhere else: " << std::endl;

                            // p_double_value = & other_double_value;

                            // std::cout << "double_value: " << double_value << std:endl;
                            // std::cout << "ref_double_value: " << ref_double_value << std:endl;
                            // std::cout << "p_double_value: " << p_double_value << std:endl;
                            // std::cout << "*p_double_value: " << *p_double_value << std:endl;
                            // std::cout << "other_double_value: " << other_double_value << std:endl;

                            // std::cout << std::endl;
                            // std::cout << "Changing the now pointed to value: " << std::endl;

                            // *p_double_value = 555.66;

                            // std::cout << "double_value: " << double_value << std:endl;
                            // std::cout << "ref_double_value: " << ref_double_value << std:endl;
                            // std::cout << "p_double_value: " << p_double_value << std:endl;
                            // std::cout << "*p_double_value: " << *p_double_value << std:endl;
                            // std::cout << "other_double_value: " << other_double_value << std:endl;

                    // References are somewhat like const pointers:

                        // References behave like constant pointers, but they have a much friendlier syntax as they don't require dereferencing to read and write through referenced data...

                            // double *const const_p_double_value {&double_value};

                            // const_p_double_value = &other_double_value; // Error...



