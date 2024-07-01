// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// When "new" Operator Fails:

    // In some rare cases, the 'new' operator will fail to allocate dynamic memory from the heap. When that happens, and you have no mechanism in place to handle that failure, an exception will be thrown and your program will crash. BAD!

    // 'new' operator fails very rarely in practice and you'll see many programs that assume that it always works and don't check for memory allocation failure in any way. Depending on your application, failed memory allocations can be very bad and you need to check and handle them...

    // Simulating memory allocation failure:

        // Try to allocate a insanely huge array in one go. Unhandled new failure: CRASH!

            // int *lots_of_ints1 {new int[1000000000000000000]}; // May give an error about exceeding array size. // cause our heap section in memory map is not infinite maybe...

            // Use a huge loop to try and exhaust the memory capabilities of your system. When new fails, your program is going to forcefully terminate...

                // for (size_t i {}; i < 100000000000; ++i) {
                    // int *lots_of_ints2 {new int[10000000]};
                // }

    // Checking For Failed Memory Allocations:

        // *) Through the exception mechanism... // built in way in c++ to check for errors and handle them...
        // *) The std::nothrow setting...

            // *) The Exception Mechanism:

                // Handling the exception:

                    // Handle the problem in a way that makes sense for your application. For example if you were trying to allocate memory to store color information for your application, and allocation fails, you could opt for showing some feedback message to the user, and rendering your app in black/white.

                        // for (size_t i {}; i < 100000000000; ++i) {
                            // try
                            // {
                                // int *lots_of_ints3 {new int[10000000]};
                            // }
                            // catch(std::exception& ex)
                            // {
                                // std::cerr << "Caught exception ourselves: " << ex.what() << std::endl;
                            // }                          
                        // }

            // *) std::nothrow:

                // ideal if you don't want exceptions thrown when 'new' fails

                    // for (size_t i {}; i < 100000000000; ++i){
                        // int *lots_of_ints4 { new (std::nothrow) int[10000000]};
                        // if (lots_of_ints4 == nullptr)
                        // {
                            // Don't try to dereference and use lots_of_ints4 in here. You'll get undefined behaviour maybe. No memory has really been allocated here. It failed and returned nullptr because of the std::nothrow setting...
                            // std::cout << "Memory allocation failed" << std::endl;
                        // } else {
                            // std::cout << "Memory allocation succeeded" << std::endl;
                        // }
                        
                    // }