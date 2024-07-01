// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Memory Leaks:

    // When we loose access to memory that is dynamically allocated... // you basically loose the pointer that was pointing to that dynamically allocated piece of memory...

        // *) Reassignment of stack address to active dynamic address pointer:

            // int *p_number {new int{67}}; // Points to some address, let's call that address1...

            // Should delete p_number and reset here...

            // int number {55}; // lives at address2... // stack memory...

            // p_number = &number; // Now p_number points to address2, but address1 is still in use by our program. But our program has lost access to that memory location. Memory has been leaked...

        // *) Double Allocation:

            // int *p_number1 {new int{55}};

            // Use the pointer...

            // Should delete and reset here

            // p_number1 = new int{44}; // memory with int {55} leaked...

        // *) Pointer In Local Scope:

            // # include <iostream>

            // int main (int argc, char **argv) {
                // ...
                // {
                    // int *p_number2 {new int{57}}; // stack pointer... // but memory is maybe dynamically allocated...
                // }
                // Memory with int {57} leaked...

                // return 0;
            // }

            