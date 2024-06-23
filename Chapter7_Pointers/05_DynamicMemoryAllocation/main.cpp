// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Dynamic Memory Allocation:

        // Dynamic memory allocaion, which is really going to use the heap, starting in the next lecture... Dynamic memory allocaion is a technique we can use to start using heap storage...that we have in the memory map of our C++ program, we can use that to get additional memory we can use and do stuff, if "stack memory" isn't enough for our purposes, and this is how we have been using pointers so far...

    // How we've been using pointers so far:

        // int number {22}; // stack memory 
        // int* p_number = &number;

        // std::cout << std::endl;
        // std::cout << "Declaring pointer and assigning address" << std::endl;
        // std::cout << "number: " << number << std::endl;
        // std::cout << "p_number: " << p_number << std::endl;
        // std::cout << "&number: " << &number << std::endl;
        // std::cout << "*p_number: " << std::endl;

    // int* p_number1; // uninitialized pointer, contains junk address
    // int number1 {12};
    // p_number1 = &number1; // Making it pointing to a valid address...
    // std::cout << std::endl;
    // std::cout << "Uninitialized pointer: " << std::endl;
    // std::cout << "*p_number1: " << *p_number1 << std::endl;



    // Bad Things:

        // Writing into uninitialized pointer through dereference:

            // int* p_number2; // contains junk address: could be anything...
            // *p_number2 = 55; // Writing into junk address: Bad!...

            // std::cout << std endl;
            // std::cout << "Writing into uninitialized pointer through dereference" << std endl;
            // std::cout << "p_number2" << p_number2 << std endl; // Reading from junk address...
            // std::cout << "*p_number2" << *p_number2 << std endl;

        // Initializing pointer to null:

            // // int *p_number3 {nullptr}; // Also works...
            // int *p_number3 {}; // Initialized with pointer equivalent of zero: nullptr... // A pointer pointing nowhere...
            // // *p_number3 = 33; // Writing into a pointer pointing nowhere: Bad, Crash...

            // std::cout << std::endl;
            // std::cout << "Reading and writing through nullptr: " << std::endl;
            // // std::cout << "p_number3: " << p_number3 << std::endl;
            // // std::cout << "*p_number3: " << *p_number3 << std::endl; // Reading from nullptr... 
                                                                          // Bad, Crash...

        // If you don't know what is in a pointer, then don't use that pointer because bad things can happen... // good pratice is to initialize pointers before you use them or you can initialize them with no pointer and make sure that you are modifying valid addresses into those pointers... // don't do those practices that we defined under "// Bad Things:" heading above starting from line 33 to ending at line 55... // don't try to work with a pointer that is pointing to no ptr... like above code under "// Initializing pointer to null:" heading above starting from line 45 to ending at line 55...

    // So far we've only been using memory allocated on the stack section of our memory map, like we were using variables that we have declared in the main function,  we were using the variables that we have declared inside some functions and that's all stuff that live on the stack. Now we are going to see how one can allocate memory from the heap, and some of the differences between these mechanisms:

        // Differences between stack and heap memory: (memory map of our program)

            // Stack:

                // *) Memory is finite...
                // *) The developer isn't in full control of the memory lifetime...
                // *) Lifetime is controlled by the scope mechanism...

            // Heap:

                // *) Memory is finite...
                // *) The developer is in full control of when memory is allocated and when it's released...
                // *) Lifetime is controlled explicitly through "new" and "delete" operators...

        // Heap memory is additional memory that we can use, if we don't want to run out of stack memory...

            // Lifetime Through Scope Mechanism:

                // # include <iostream>

                /*
                int main (int argc, char **argv) {
                    { // scope...
                        int local_scope_var {33}; // This variable will come to life when this statement will be executed // This variable, that is going to come to life that is declared in this line, delimited by the scope (the scope opened at above line 63 and closing at below line 85) in this block...
                    } // this above line 84 declared variable "int local_scope_var {33}" will die here at the closing of this scope "}" (the scope that we started or opened "{" above at line 83) in this line...
                    return 0;
                }
                */

            // Allocate Dynamic Memory Through "new": // once we do this then things will be going to get stored in heap section and not stack section memory (of memory map) after that statement of allocating dynamic memory which is below maybe at line 96 or line 98(most probably line 96 as far as I think...) is executed... (maybe)

                // Initialize the pointer with dynamic memory. Dynamically allocate...
                // Memory at run time and make a pointer point to it...

                    // int *p_number4 {nullptr};
                    // p_number4 = new int; // Dynamically allocate space for a single int on the heap memory. This memory belongs to our program from now on. The system can't use it for anything else, until we return it. After this line executes, we will have a valid memory location allocated. The size of the allocated memory will be such that it can store the type pointed to by the pointer...

                    // *p_number4 = 77; // Writing into dynamically allocated memory...

                    //std::cout << std::endl;
                    //std::cout << "Dynamically allocating memory: " << std::endl;
                    //std::cout << "*p_number4: " << *p_number4 << std::endl;

            // Stack Lifetime Vs Heap Lifetime:

                // # include <iostream>

                /*
                int main (int argc, char **argv)
                {
                    {
                        int local_var {33}; // it will come to life when this statement will be executed and will die at the closing of this local scope below at line 114.
                        int *local_ptr_var = new int; // it will come to life when this statement will be executed and will die if we'll explicitly tell it to die by using the "delete" keyword maybe and wont die at the closing of this local scope below at line 114... // lives on the Heap section of memory map... // we can use this variable out of this scope... // This variable will be ours until we decide to return it to operating system by using "delete" keyword for this variable... // Heap memory is maybe new piece of memory which only belongs to our program and operating system maybe cannot access it for another programs (or nothing at all) until we decide to return it to operating system by using the "delete" keyword...
                    }
                    return 0;
                }
                */

            // Releasing And Resetting:

                // int *p_number4 {nullptr};
                // p_number 4 = new int;

                /* code... */

                // delete p_number4; // this statement will return the memory to the operating system... // Releasing memory... // after this statement will execute, the pointer will contain junk and we won't be able to use it so we'll reset it to nullptr like in the below line 127... // cause that junk can be the address of maybe some other program or maybe allocated to operating system to run operating system on system...                
                // p_number4 = nullptr; // so that other people know that there is no valid data in this memory... // resetting to nullptr, because if we'll try to use deleted memory section, bad things are going to happen... because memory is not ours after using the delete keyword and because it contains junk now and returned to operating system and so same problem of trying to use an uninitialized piece of memory is going to happen maybe... // so to play safe, after releasing the memory by using delete keyword, also reset it to nullptr to play safe like we did below from line 150 to 159... // after the above statement at line 126, will execute, the pointer will contain junk and we won't be able to use it so we'll reset it to nullptr like in the below line 127... // cause that junk can be the address of maybe some other program or maybe allocated to operating system to run operating system on system...

            // Initialize With "new" upon pointer declaration:

                // It is also possible to initialize the pointer with a valid address up on declaration. Not with a nullptr...:

                    // int *p_number5 {new int}; // Memory location contains junk value...
                    // int *p_number6 {new int (22)}; // Use direct initialization...
                    // int *p_number7 {new int {23}}; // Use uniform initialization...

                    // std::cout <<  << std::endl;
                    // std::cout << "Initialize with valid memory address at declaration: " << std::endl;
                    // std::cout << "p_number5: " << p_number5 << std::endl;
                    // std::cout << "*p_number5: " << *p_number5 << std::endl;

                    // std::cout << "p_number6: " << p_number6 << std::endl;
                    // std::cout << "*p_number6: " << *p_number6 << std::endl;

                    // std::cout << "p_number7: " << p_number7 << std::endl;
                    // std::cout << "*p_number7: " << *p_number7 << std::endl;

                    // after we are done using the heap memory we'll release that memory by using "delete" keyword with the pointer and also we are going to reset it's value to nullptr to play safe like below from line 150 to 159... // after releasing, the pointer will contain junk and we won't be able to use it, so we'll reset it to nullptr like below from line 150 to 159... // cause that junk can be the address of maybe some other program or maybe allocated to operating system to run operating system on system...

                    // Remember to release the memory:

                        // delete p_number5;
                        // p_number5 = nullptr;

                        // delete p_number6;
                        // p_number6 = nullptr;

                        // delete p_number7;
                        // p_number7 = nullptr;

                    // Calling delete twice on a pointer: Bad!... // can lead to undefined behaviour, program can even crash maybe... // it'll not actually release the memory because the program will crash... // You'll maybe think why will I use this delete keyword twice on same pointer, well, your program can contain multiple files...

                    // we can reuse these deleted and resetted pointers in our program again by allocating them new memory in heap again by using "new" keyword and by putting valid value inside that pointer through dereferencing that pointer in next statement and assign it a valid value, we can again reuse it...

                    // Reuse the deleted and resetted Pointer:

                        // p_number5 = new int(81);
                        // std::cout << "*p_number5" << *p_number5 << std::endl;

                        // delete p_number5;
                        // p_number5 = nullptr;













