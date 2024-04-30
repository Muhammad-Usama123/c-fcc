// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Characters And Text:

    // represented by char...

    // char occupies 1 byte in memory... same as bool

        // 1 byte: 256 possible values:

            // Each matched to some character... // ASCII Table pic taken by lightshot with the name ASCII Table... // like 33 represents ! // 48 represents 0 etc. etc. // In ASCII Table almost every type of characters like alphabets, numbers, special characters are represented by the numbers, like 33 represents ! and 48 represents 0 etc. etc. in ASCII Table (mapping)... // ASCII Table source link is written in course video at 4:26:13.. // ASCII encoding that takes characters and stores them in 1 byte in memory.

    // Example:

        // char character1 {'a'}; // single quotes necessary to mean they are characters, if you don't use single quote you'll may get compiler error..
        // char character2 {'r'}; 
        // char character3 {'r'};
        // char character4 {'o'};
        // char character5 {'w'};