// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Input And Output Parameters:

    // How we can use function parameters to get data out of the function...

        // Input And Output Function Parameters:

            // void max_str (const std::string& input1, const std::string input2, std::string& output) // we didn't make output parameter (third parameter of this function) const here cause if we'll do that, we'll get a compiler error, if we'll try to do something like this and also assign something to the output parameter here...

            // {
                // if (input1 > input2) {
                    // output = input1;
                // } else {
                    // output = input2;
                // }
            // }

            // void max_int (int input1, int input2, int& output) // in this function parameters we are not using references for input parameters cause it is cheap to copy values (pass by value) which we don't want to modify anyway... but we are using reference for output parameter cause we want to modify it's value outside the function...

            // {
                // if (input1 > input2) {
                    // output = input1;
                // } else {
                    // output = input2;
                // }
            // }

            // void max_double ( double input1, double input2, double* output) {
                // if( input1 > input2) {
                    // *output = input1;
                // } else {
                    // *output = input2;
                // }
            // }

        // Input And Output Function Parameters:

            // Output parameters should be passed in such a way that you can modify the arguments from inside the function. Options are passing by reference or passing by pointer. References are preferred in C++...

            // Input parameters shouldn't be modifiable from inside a function. The function really need to get input (read) from the arguments. You enforce modification restrictions with the const keyword. Options are passing by const reference, passing by pointer to const, or even passing by const pointer to const...