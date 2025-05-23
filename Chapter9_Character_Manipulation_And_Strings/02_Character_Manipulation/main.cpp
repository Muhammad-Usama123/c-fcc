// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Character Manipulation:

    // Some Facilities in C++ Standard Library that can help us manipulate characters:

        // Check if character is alphanumeric...
        // Check if character is alphabetic...
        // Check if a character is blank...
        // Check if a character is lowercase or uppercase...
        // Check if a character is a digit...
        // Turning a character to lowercase/uppercase using the std::tolower() and std::toupper functions... 

            // Documentation:

                // "https://en.cppreference.com/w/cpp/header/cctype" for more character facilities in C++...

            // <cctype> library...

            // Check if character is alphanumeric:

                // Check if character is alphanumeric:

                    // std::cout << std:: endl;
                    // std::cout << "std::isalnum: " << std:: endl;

                    // std::cout << "C is alphanumeric: " << std::isalnum('C') << std::endl; // returns non-zero int value maybe if the character is alphanumeric... // can be treated like true...
                    // std::cout << "^ is alphanumeric: " << std::isalnum('^') << std::endl; // returns 0 if the character is not alphanumeric... // can be treated like false...

                // Can use this as a test condition:

                    // char input_char {'*'}

                    // if (std::isalnum(input_char)) {
                        // std::cout << input_char << "is alphanumeric." << std::endl
                    // } else {
                        // std::cout << input_char << "is not alphanumeric." << std::endl
                    // }

            // Check if character is alphabetic:

                // Check if character is alphabetic:

                    // std::cout << std:endl;

                    // std::cout << "std::isalpha: " << std::endl;
                    // std::cout << "C is alphabetic: " << std::isalpha('C') << std::endl; // returns same non-zero and 0 value and we can treat them like true and false...
                    // std::cout << "^ is alphabetic: " << std::isalpha('^') << std::endl;
                    // std::cout << "7 is alphabetic: " << std::isalpha('7') << std::endl;

            // Check if character is blank:

                // Check if a character is blank:

                    // std::cout << std::endl;
                    // std::cout << "std::isblank: " << std::endl;

                    // char message[] {"abcdef there. How are you doing? The sun is shining."}

                    // std::cout << "message: " << message << std::endl;

                // Find and print blank index:

                    // int blank_count{}; // we can get here negative number so better to use "unsigned int" datatype here or we can also use and also the good practice here will be to use "size_t" datatype here cause we are measuring the size here in this variable...

                    // for (size_t i{0}; i < std::size(message); ++i) {
                        // // std::cout << "Value: " << message[i] << std::endl;
                        // if (std::isblank(message[i])) {
                            // std::cout << "Found a blank character at index: [" << i << "]" << std::endl;
                            // ++blank_count;
                        // }
                    // }

                    // std::cout << "In total we found " << blank_count << "blank characters." << std::endl;

            // Check if character is lowercase/uppercase:

                // Check if character is lowercase or uppercase:

                    // std::cout << "std::islower and std::isupper: " << std::endl;

                    // std::cout << std::endl;

                    // char thought [] {"The C++ Programming Language is one of the most used on the Planet."};

                    // int lowercase_count {};
                    // int uppercase_count {};

                // Print original string for ease of comparision on the terminal:

                    // std::cout << "Original string: " << thought << std::endl;

                    // for (auto character : thought) {
                        // if (std::islower(character)) {
                            // std::cout << "" << character;
                            // ++lowercase_count;
                        // }
                        // if (std::islower(character)) {
                            // std::cout << "" << character;
                            // ++lowercase_count;
                        // }

                        // if (std::isupper(character)) {
                            // ++uppercase_count;
                        // }
                    // } 

                        // std::cout << std::endl;
                        // std::cout << "Found " << lowercase_count << "lowercase characters and " << uppercase_count << "uppercase characters." << sts::endl;

                // Check if character is a digit:

                    // Check if a character is a digit:

                        // std::cout << std::endl;
                        // std::cout << "std::isdigit: " << std::endl;

                        // char statement [] {"Mr Hamilton owns 221 cows. That's a lot of cows! The kid exclaimed."};

                        // std::cout << "statement: " << statement << std::endl;

                        // int digit_count {};

                        // for (auto character : statement) {
                        // if (std::isdigit(character)) {
                            // std::cout << "Found digit: " << character << std::endl;
                            // ++digit_count;
                        // }
                    // }

                        // std::cout << std::endl;
                        // std::cout << "Found " << digit_count << "digits in the statement string." << std::endl;

                // Turn characters to lowercase/uppercase:

                    // Turning a character to lowercase using the std::tolower() function:

                        // std::cout << std::endl;

                        // std::cout << "std::tolower and std::toupper: "

                        // char original_str [] {"Home. The feeling of belonging"};
                        // char dest_str[std::size(original_str)];

                            // Turn this to uppercase. Change the array in place:

                                // for (size_t i{}; i < std::size(original_str); ++i) {
                                    // dest_str[i] = std::toupper(original_str[i]);
                                // }

                                // std::cout << "Original string: " << original_str << std::endl;
                                // std::cout << "Uppercase string: " << dest_str << std::endl;

                            // Turn this to lowercase. Change the array in place:

                                // for (size_t i{}; i < std::size(original_str); ++i) {
                                    // dest_str[i] = std::tolower(original_str[i]);
                                // }

                                // std::cout << "Original string: " << original_str << std::endl;
                                // std::cout << "Lowercase string: " << dest_str << std::endl;

                            







                    