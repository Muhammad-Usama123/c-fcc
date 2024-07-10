// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// First Hand On Functions:

    // A reusable piece of code that can take a number of optional inputs and produce some desirable output...

        // input --->
        // input --->   Function Processing ---> output...
        // input --->


            // return_type(// return_type will be output from the function...) function_name (param1, param2, .... (// These params are input...)) {
                // Operations // processing... 
                // return return_type
            // }

        // No Input, No Output:

            // void function_name () {
                // operations // processing
                // return return_type; 
            // }

        // Function Signature:

            // Function name + Function parameters...

        // Calling(using) a Function:

            // result_var = function_name(arg1, arg2,...);

            // function_name ();

        // Function That Takes A Single Parameter, And Doesn't Give Back The Result Explicitly:

            // void enter_bar (int age) {
                // if (age > 18) {
                    // std::cout << "You're " << age << "years old. Please proceed." << std::endl;
                // } else {
                    // std::cout << "Sorry, you're too young for this. No offense! " << std::endl;
                // }
            // }

        // Function That Takes Multiple Parameters, And returns the result of the computation:

            // int max (int a, int b) {
                // if (a > b) 
                    // return a;
                // else 
                    // return b;
            // }

        // Function That Doesn't Take Parameters And Returns Nothing:

            // void say_abcde () {
                // std::cout << "Abcde there" << std::endl;
                // return; // You could omit this return statement for functions returning void...
            // }

        // Function That Takes No Parameters And Return Something:

            // int lucky_number () {
                // return 99;
            // }

        // Calling Functions:

            // int main (int argc, char **argv){
                // Declaring And Using Functions:

                    // int a_value {14};
                    // int b_value {10};

                    // int a{33};
                    // int b{41}; // Show that parameters and arguments can have the same name...

                    // std::cout << "Calling the enter_bar function: " << std::endl;
                    // enter_bar(22); // Function call...

                    // int maximum_number{max(a_value, b_value)}; // Function Call... // Can store the return value in a variable and use that later on...
                    // std::cout << "max(" << a_value << ", " << b_value << "): " << maximum_number <<  std::endl;

                    // Direct Function Call:

                        // std::cout << "max(" << a << ", " << b << "): " << max(a, b) <<  std::endl;

                    // std::cout << "Calling say_abcde method: " << std::endl;
                    // say_abcde(); // Function call...

                    // Direct Function Call:
                        // std::cout << "Your lucky number is: " << lucky_number() << std::endl;

                            // Functions can be reused as much as you want. The function code only has to be maintained once:

                                // a = 100;
                                // b = 200;

                                // std::cout << "max(" << a << ", " << b << "): " << max(a, b) << std:: endl;
                                // std::cout << "max(" << 500 << ", " << 303 << "): " << max(500, 303) << std:: endl;

                    // return 0;
            // }

            // Implicit Conversions In Functions:

                // char d {55};
                // char e {51};

                // double f {12.33};
                // double g {51.25};

                // std::cout << std::endl;
                // std::cout << "Calling min function with char arguments: " << std::endl;

                // int minimum_number{min(d, e)}; // d, e implicitly converted to int...

                // std::cout << "min(" << static_cast<int>(d) << ", " << static_cast<int>(e) << "): " << minimum_number << std::endl;

                // doubles will undergo an implicit narrowing conversion from double to int. Info after decimal point will be lost:

                    // std::cout << std::endl;
                    // std::cout << "Calling min function with double arguments: " << std::endl;
                    // minimum_number = min(f, g);
                    // std::cout << "min(" << f << ", " << g << "): " << minimum_number << std::endl;


            // Argument Scope: Copies

                // Parameters passed this way are scoped locally in the function. Changes to them are not visible outside the function. What we have inside the function are actually copies of the arguments passed to the function...

                    // double increment_multiply(double a, double b){
                        // std::cout << "Inside function, before increment: " << std::endl; 
                        // std::cout << "a: " << a << std::endl; 
                        // std::cout << "b: " << b << std::endl; 

                        // double result = ((++a) * (++b));

                        // std::cout << "Inside function, after increment: " << std::endl; 
                        // std::cout << "a: " << a << std::endl; 
                        // std::cout << "b: " << b << std::endl; 

                        // Returning the result:

                            // return result;
                    // }

                // Argument Scope: Copies

                    // std::cout << std::endl;
                    // std::cout << "argument scope: copies" << std::endl;

                    // double h {3.00};
                    // double i {4.00};

                    // std::cout << "Outside function, before increment: " << std::endl;
                    // std::cout << "h: " << h << std::endl;
                    // std::cout << "i: " << i << std::endl;

                    // double incr_mult_result = increment_multiply(h, i);

                    // std::cout << "Outside function, after increment: " << std::endl;
                    // std::cout << "h: " << h << std::endl;
                    // std::cout << "i: " << i << std::endl;

                    // we can call functions in loop too...
                    // when we call function the control goes to the body of the function till it ends and then the control will get returned to our main function to execute the other code...
                    // functions will have to be declared before the main function in c++...



