// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Booleans: // We can use this datatype for decisions like if else statement etc.. 

    // true
    // false

    // Represented In C++ Program by:

        // bool red_light {true};
        // bool green_light {false};

            // When printing bool values in terminal of variables declared in lines 15 and 16:

                // 1 // true will get printed as 1 maybe in the terminal...
                // 0 // false will get printed as 0 maybe in the terminal...

                // For Explicitly print the values in terminal as true and false we can use the statement written in below line 25.

    //std::cout << std::boolalpha // Forces the output format to true/false, If we try to print with this setting applied...

    // Boolean takes 8 bits in memory (1 byte)...

    // A byte can store 256 different values...

    // Using it just to cover 2 states (true/false) is wasteful, especially for devices with hard memory constraints (think embedded devices)
    
    // There are techniques to pack even more data into a byte. We'll learn more about these in a few upcoming chapters Insha Allah...