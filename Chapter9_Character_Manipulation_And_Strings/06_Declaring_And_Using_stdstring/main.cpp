// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Declaring And Using std::string:

    // include <string> library...

        // *) Declaring std::string variables:

            // std::string full_name; // Empty string...
            // std::string planet {"Earth. Where the sky is blue"} // Initialize with string literal...
            // std::string preferred_planet {planet}; // Initialize with other existing string...
            // std::string message {"Abcde there", 5}; // Initialize with part of a string literal, contains abcde...
            // std::string wierd_message (4, 'e'); // Initialize with multiple copies of a char, contains eeee...
            // std::string greeting {"Abcde World"}; 
            // std::string saying_abcde {greeting, 6, 5}; // Initialize with part of an existing std::string, starting at index 6, taking 5 characters. Will contain World...

            // std::cout << "full_name: " << full_name << std::endl;
            // std::cout << "planet: " << planet << std::endl;
            // std::cout << "preferred_planet: " << preferred_planet << std::endl;
            // std::cout << "message: " << message << std::endl;
            // std::cout << "greeting: " << greeting << std::endl;
            // std::cout << "saying_abcde: " << saying_abcde << std::endl;

            // when we grow and update our already existing std::string with string value, std::string automatically return the previous string memory to operating system and allocate new memory for our string but in arrays we'll have to do it ourselves otherwise previous string value will not be returned to operating system and new memory will also be allocated to the grown updated string value, so it means that std::string automatically saves us from wasting any part of memory... // pointer will point to another string after updated grown string assigned to already declared string array pointer, without returning the previous string memory to operating system... 