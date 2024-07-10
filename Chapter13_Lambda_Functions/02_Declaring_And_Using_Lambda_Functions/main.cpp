// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Declaring And Using Lambda Functions:

    // Lambda Function Signature:

        // Lambda Function Signature:

            // [capture list] (parameters) ->return type // you don't have to put this return type in explicitly, and in this case compiler will automatically deduce this function's return type... {
                // Function Body
            // };

            // [] () {
                // std::cout << "Abcde World!" << std::endl;
            // };

            // Giving Our Lambda Function A Name To Call It: 

                // auto func = [] () {
                    // std::cout << "Abcde World!" << std::endl;
                // };

                // func(); // Syntax for calling this function...

            // Call Lambda Function Directly After Definition:

                // [] () {
                    // std::cout << "Abcde World!" << std::endl;
                // }();

            // Lambda Function That Takes Parameters:

                // [] (double a, double b) {
                    // std::cout << "a + b: " << (a + b) << std::endl;
                // }(12.1, 5.7);

            // Lambda Function That Returns Something:

                // auto result = [] (double a, double b) {
                    // return (a + b);
                // }(12.1, 5.7);

                // std::cout << "result: " << result << std::endl;

            // Print Result Directly:

                // std::cout << "result: " << [] (double a, double b) {
                    // return (a + b);
                // }(12.1, 5.7) << std::endl;

            // Specify Return Type Explicitly:

                // auto result = [] (double a, double b)->double {
                    // return (a + b);
                // }(12.1, 5.7);

                // std::cout << "result: " << result << std::endl;

                // Note: By giving our lambda function a name, we can call it multiple times... // By directly calling lambda function after declaring it without giving it a name, it can only run our lambda function one time, cause we don't have any handle to this lambda function like we have in lambda function, assigned to a variable and we will be able to call it multiple times through that variable name and adding a pair parenthesis after that and that variable name will act as a handle to that lambda function... // Lambda function is a C++ statement so it requires ; at the end...