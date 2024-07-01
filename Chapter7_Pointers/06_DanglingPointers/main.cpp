// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Dangling Pointers:

    // A pointer that doesn't point to valid memory address. Trying to dereference and use a dangling pointer will result in undefined behaviour...

    // Kinds Of Dangling Pointers:

        // There are 3 kinds of dangling pointers:

            // *) Uninitialized pointer...
            // *) Deleted pointer...
            // *) Multiple pointers pointing to same memory...

                // *) Uninitialized Pointer Or Non Initialized Pointer:

                    // int *p_number; // dangling uninitialized pointer... // contains junk address...

                    // std::cout << std::endl;
                    // std::cout << "Case 1: Uninitialized Pointer: ." << std::endl;
                    // std::cout << "p_number: " << p_number << std::endl;
                    // // std::cout << "*p_number: " << *p_number << std::endl; // Crash! // dereferencing of uninitialized pointer: Bad!...

                // *) Deleted Pointer :

                    // std::cout << std::endl;
                    // std::cout << "Case 2: Deleted Pointer: ." << std::endl;
                    // int *p_number2 {new int{67}}; 

                    // std::cout << "*p_number2 (before delete): " << *p_number1 << std::endl;
                    // delete p_number2;
                    // std::cout << "*p_number2 (after delete): " << *p_number1 << std::endl; // Using pointer after deleting it: Bad! // use the deleted pointer after you properly initialize it with some kind of memory by using "new" keyword...

                // *) Multiple Pointers Pointing To Same Address:

                    // std::cout << std::endl;
                    // std::cout << "Case 3: Multiple pointers pointing to same address: " << std::endl;

                    // int *p_number3 {new int{83}}; 
                    // int *p_number4 {p_number3}; 

                    // std::cout << "p_number3 - " << p_number3 <<  " - " << *p_number3 << std::endl; // this line 47 and below line 48 will print the same address and same value...
                    // std::cout << "p_number4 - " << p_number4 << " - " << *p_number4 << std::endl;

                    // // Deleting p_number3:
                    // delete p_number3; // now after executing this statement, now p_number4 points to deleted memory. Dereferencing it will lead to undefined behaviour: Crash, garbage or whatever...
                    
                    // std::cout << "p_number4 (after deleting p_number3) - " << p_number4 << " - " << *p_number4 << std::endl; // Using pointer after deleting it: Bad! // use the deleted pointer after you properly initialize it with some kind of memory by using "new" keyword...

                // Solutions:

                    // *) Initialize your pointers... // if you don't know what to put in in the pointer at the time of declaration then initialize it with nullptr and then change the address later whenever you want...
                    // *) Reset pointers after delete... // reset to nullptr after you delete the memory...
                    // *) For multiple pointers to same address, make sure the owner pointer is very clear... // you'll have to choose and make one pointer the master of the controller of the memory and all other pointers are basically going to be slaves which won't be able to release the memory, but they can read and do something with that memory, but they'll won't have the task of releasing that memory...

                    // Solution 1:

                        // Initialize your pointers immediately upon declaration:

                            // std::cout << std::endl;
                            // std::cout << "Solution 1: " << std::endl;

                            // int *p_number5 {};
                            // int *p_number6 {new int{56}};

                                // Check For "nullptr" Before Use:

                                    // if (p_number6 != nullptr) {
                                        // std::cout << "*p_number6: " << *p_number6 << std::endl;
                                    // }
 
                    // Solution 2:

                        // Right after you call delete on a pointer, remember to reset the pointer to nullptr to make it clear it doesn't point anywhere:

                            // std::cout << std::endl;
                            // std::cout << "Solution 2: " << std::endl;

                            // int *p_number7 {new int{82}};

                                // Use the pointer however you want:

                                        // std::cout << "p_number7 - " << p_number7 << " - " << *p_number7 << std::endl;

                                        // delete p_number7;
                                        // p_number7 = nullptr; // Reset the pointer...

                                    // Check For "nullptr" Before Use:

                                        // if (p_number7 != nullptr) {
                                            // std::cout << "*p_number7: " << *p_number7 << std::endl;
                                        // }

                    // Solution 3:

                        // For multiple pointers pointing to the same address, make sure there is one clear pointer (master pointer) that owns the memory (responsible for releasing when necessary), other pointers should only be able to dereference when the master pointer is valid: 

                            // int *p_number8 {new int{382}}; // Let's say p_number8 is the master pointer
                            // int *p_number9 {p_number8};

                                // Dereference The Pointers And Use Them:

                                    // std::cout << "p_number8 - " << p_number8 << " - " << *p_number8 << std::endl;

                                    // if (!(p_number8 == nullptr)) { // only use slave pointers when master pointer is valid...
                                            // std::cout << "p_number9 - " << p_number9 << " - " << *p_number9 << std::endl;
                                        // }

                                    // delete p_number8; // Master releases the memory
                                    // p_number8 = nullptr;
                                        
                                    // if (!(p_number8 == nullptr)) { // only use slave pointers when master pointer is valid...
                                            // std::cout << "p_number9 - " << p_number9 << " - " << *p_number9 << std::endl;
                                        // }else {
                                            // std::cerr << "WARNING: Trying to use an invalid pointer" << std::endl;
                                        // }




                