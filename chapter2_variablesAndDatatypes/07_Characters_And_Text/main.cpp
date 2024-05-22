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

    // It is possible to assign a valid ASCII code to a char variable, and the corresponding character will be stored in. You can choose to interpret that either as a character or a regular integral value (as a number like only an integer maybe).

        // Example: 

            // char value = 65; // 65 will be stored in memory but c plus plus will interpret this as a character (A).

            // std::cout << "value: " << value << std::endl; this will print A in terminal maybe.
            // std::cout << "value(int): " << static_cast<int>(value) << std::endl; this will print 65 in terminal maybe cause this time we used "static_cast<int>(value)" when printing the value of a variable value.

            // static_cast is a way to transform between datatypes.

    // ASCII was among the first encodings to represent text in a computer.
    // It falls short when it comes to representing languages other than English and a few western languages. Think Arabic, East Asian languages like Japanese, Chinese...
    // There are better ways to represent text that is meant to be seen in different languages, one of the most common being Unicode.
    // The details of Unicode are out of scope for this course, just know that it's a robust way to represent text in different languages for a computer.
    // ASCII encoding is a technique through which we can map the first 128 numbers in a byte through characters and use that to represent characters.

    // Unicode for complex languages and a better way to represent characters than ASCII...

        