// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// C-string Concatenation And Copying:

    // Few more facilities from the <cstring> library of C++:

        // Documentation: "https://en.cppreference.com/w/cpp/header/cstring"

        // *) std::strcat : Joining Strings...

            // Concatenation:

                //  std::cout << std::endl;
                // std::cout << "std::strcat: " << std::endl;

                    // docs: "https://en.cppreference.com/w/cpp/string/byte/strcat"

                // char dest [50] = "Abcde ";
                // char src [50] = "World!";
                
                // std::strcat(dest, src);
                // std::strcat(dest, " Fghijkl World!");

                // std::cout << "dest: " << dest << std::endl;

                    // More Concatenation:

                        // std::cout << std::endl;
                        // std::cout << "More std::strcat: " << std::endl;

                        // char *dest1 = new char[30]{'F', 'i', 'r', 'e', 'a', 'b', 'c', 'd', '\0'}
                        // char *source1 = new char[30]{',', 'T', 'h', 'e', ' ', 'D', 'e', 'f', 'g', 'h', 'i', ' ', 'K', 'i', 'n', 'g', '!', '\0'}

                        // std::cout << "std::strlen(dest1): " << std::strlen(dest1) << std::endl;
                        // std::cout << "std::strlen(source1): " << std::strlen(source1) << std::endl;

                        // std::cout << "Concatenating..." << std::endl;
                        // std::strcat(dest1, source1);

                        // std::cout << "std::strlen(dest1): " << std::strlen(dest1) << std::endl;
                        // std::cout << "dest1: " << dest1 << std::endl;


        // *) std::strncat: Joining Strings...

            // std::strncat: concatenates n characters from src to dest and returns a pointer to the result string. Signature : char *strncat(char *dest, const char *src, std::size_t count);

            // std::cout << std::endl;
            // std::cout << "std::strncat: " << std::endl;

            // char dest2[50] { "Abcde" };
            // char source2 [30] = { " There is a abcd on my window" };

            // You can even use the returned pointer immediately for print out. This is a pattern you'll see a lot in C++ code out there.

            // std::cout << std::strncat(dest2, source2, 6) << std::endl;

                // Or you can do std::strncat separately and print dest2:

                    // std::strncat(dest2, source2, 6);
                    // std::cout << "The concatenated string is: " << dest2 << std::endl;

        // *) std::strcpy : Copying strings...

            // std::strcpy - Signature: char* strcpy(char* dest, const char* src);

                // std::cout << std::endl;
                // std::cout << "std::strcpy: " << std::endl;

                // const char* source3 = "C++ is a multipurpose programming language."
                // char *dest3 = new char[std::strlen(source3) + 1]; // +1 for the null character. // Contains garbage data. // Not initialized...

                // std::strcpy(dest3, source3);

                // std::cout << "sizeof(dest3): " << sizeof(dest3) << std::endl;
                // std::cout << "std::strlen(dest3): " << std::strlen(dest3) << std::endl;
                // std::cout << "dest3: " << dest3 << std::endl;

        // *) std::strncpy: Copying Strings...

            // std::strncp: Copy n characters from src to dest - Signature: char *strncpy( char *dest, const char *src, std::size_t count);

                // std::cout << std::endl
                // std::cout << "std::strncpy: " << std::endl

                // const char* source4 = "Abcde";
                // char dest4[] = {'a', 'b', 'c', 'd', 'e', 'f', '\0'}; // Have to put the terminating null char if we want to print...

                // std::cout << "dest4: " << dest4 << std::endl;

                // std::cout << "Copying..." << std::endl;
                // std::strncpy(dest4, source4, 5);

                // std::cout << "dest4: " << dest4 << std::endl;

        