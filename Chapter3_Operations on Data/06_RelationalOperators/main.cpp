// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Relational Operators:

    // Comparing Stuff // return true or false... actually 1 and 0 but we can convert it to true and false by using "std::cout << std::boolalpha;" statement maybe... maybe this statement boolalpha is only needed when printing in terminal as true or false...

        // Examples:

            // int number1 {45}; 
            // int number2 {60}; 

            // std::cout << std::boolalpha; Make bool show up as true/false instead of 1/0...

                // Stress the need for Parenthesis in when comparing:

                // std::cout << "number1 < number2: " << (number1 < number2) << std::endl;
                // std::cout << "number1 < number2: " << (number1 <= number2) << std::endl;
                // std::cout << "number1 < number2: " << (number1 > number2) << std::endl;
                // std::cout << "number1 < number2: " << (number1 >= number2) << std::endl;
                // std::cout << "number1 < number2: " << (number1 == number2) << std::endl;

                // std::cout << std:noboolalpha; // for converting results into 1/0 maybe instead of true/false maybe...

                // std::cout << "number1 < number2: " << (number1 != number2) << std::endl;

                // << and >> are maybe bitwise operators that we are using with std::cout statements above and because there precedence is higher in precedence table than comparision operators, so if we won't write the expression in which we are using these comparision or relational operators then the compiler will give an error....

                // bool result = (number1 == number2); // so in this statement we can see that we can store the result of these comparision operators in a variable and use that later in your program Insha Allah. 

                // std::cout << number1 << " == " << number2 << result << std::endl; to print the bool datatype value that we stored in this result variable above in line 33.
