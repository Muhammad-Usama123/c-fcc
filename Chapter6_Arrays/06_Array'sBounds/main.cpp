// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Bounds Of An Array:

    // If we try to modify something in the memory before our array or after our array it might be a memory location that is owned by another program, it might be a memory location that is even being used by the Operating System so bad things can really happen if we'll try to use data that is outside that array's memory locations... 