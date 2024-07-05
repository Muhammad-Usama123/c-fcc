// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// C-string Manipulation:

    // Facilities for cstring...

        // "https://en.cppreference.com/w/cpp/header/cstring" 

            // <cstring> // standard library of C++...

        // *) std::strlen: Length of a string...

            // std::strlen: Find the length of a string...

                // const char message1 [] {"The sky is blue."};

            // Array decays into pointer when we use const char*:

                // const char* message2 {"The sky is blue."};

                // std::cout << "message1: " << message1 << std::endl;

            // strlen ignores null character: // null character that is implicitly added in by the compiler at the end of our string will not count it means that maybe...

                // std::cout << "strlen(message1): " << std::strlen(message1) << std::endl;

            // Includes the null character:

                // std::cout << "sizeof(message1): " << sizeof(message1) << std::endl;

            // strlen still works with decayed arrays:

                // std::cout << "strlen(message2): " << std::strlen(message2) << std::endl;

            // Prints size of pointer:

                // std::cout << "sizeof(message2): " << sizeof(message2) << std::endl;

        // *) std::strcmp: comparing strings...

            // std::strcmp - signature: int strcmp( const char *lhs, const char *rhs);
            // Returns negative value if lhs appears before rhs in lexicographical order, 
            // Zero if lhs and rhs compare equal.
            // and Positive value if lhs appears after rhs in lexicographical order...

                // std::cout << std::endl;
                // std::cout << "std::strcmp: " << std::endl;

                // const char *string_data1 {"Alabama"};
                // const char *string_data2 {"Blabama"};

                    // Print out the comparision:

                        // std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << "): " << std::strcmp(string_data1, string_data2) << std::endl;

                        // string_data1 = "Alabama";
                        // string_data2 = "Alabamb";

                    // Print out the comparision:

                        // std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << "): " << std::strcmp(string_data1, string_data2) << std::endl;

                        // string_data1 = "Alacama";
                        // string_data2 = "Alabama";

        // *) std::strncmp: comparing strings...

            // std::strncmp: int strncmp( const char *lhs, const char *rhs, std::size_t count);
            // Compares n characters in the strings
            // Returns: Negative value if lhs appears before rhs in lexicographical order, 
            // Zero if lhs and rhs compare equal, or if count is zero...
            // and Positive value if lhs appears after rhs in lexicographical order...

                    // Print out the comparision:

                        // size_t n {3};

                        // std::cout << std::endl;
                        // std::cout << "std::strncmp: " << std::endl;

                        // std::cout << "std::strncmp (" << string_data1 << "," << string_data2 << "," << n << "): " << std::strncmp(string_data1, string_data2, n) << std::endl;

                        // string_data1 = "aaaia";
                        // string_data2 = "aaance";

                        // std::cout << "std::strncmp (" << string_data1 << "," << string_data2 << "," << n << "): " << std::strncmp(string_data1, string_data2, n) << std::endl;

        // *) std::strchr: Find first occurrence... // returns target pointer address maybe... // returns nullptr, if doesn't find the target maybe... // wants string as a first parameter maybe in which we want to search the target character and 2nd parameter that this function wants, is maybe target character... 

            // Find the first occurrence of a character:

                // std::cout << std::endl; 
                // std::cout << "std::strchr: " << std::endl; 

                    // doc : "https://en.cppreference.com/w/cpp/string/byte/strchr"

                // We use std::strchr to find all the characters one by one...

                // const char *str {"Try not. Do, or do not. There is no try."};
                // char target = 'T';
                // const char *result = str;
                // int iterations {};

                // while ((result = std::strchr(result, target)) != nullptr) {
                    // std::cout << "Found '" << target << "' starting at '" << result << "'\n";

                    // Increment result, otherwise we'll find target at the same location:

                        // ++result; // pointer arithmetic...
                        // ++iterations;
                // }

                // std::cout << "iterations: " << iterations << std::endl;

        // *) std::strrchr: Find last occurrence...

            // Find last occurrence:

                // std::cout << std::endl
                // std::cout << "std::strrchr: " << std::endl;

                    // doc : "https://en.cppreference.com/w/cpp/string/byte/strrchr"

                // char input [] = "/home/user/abc.cpp";
                // char* output = std::strrchr(input, '/');

                // if (output)
                    // std::cout << output + 1 << std::endl; // +1 because we want to start printing past the character found by std::strrchr...
                
