// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Capture Lists:

    // Capture Lists:

        // We can have access to things that are declared and defined outside the lambda function through capture list...

            // double a {10};
            // double b {20};

            // auto func = [a, b] () {
            // std::cout << "a + b: " << (a + b) << std::endl;
            // };

            // func();

                // Capturing By Value:

                    // Capturing By Value: What we have in the lambda function is a copy...

                        // int c {42};

                        // auto func = [c]() {
                            // std::cout << "Inner value: " << c << std::endl;
                        // };

                        // for (size_t i {}; i < 5; ++i) {
                            // std::cout << "Outer value: " << c << std::endl;
                            // func();
                            // ++c;
                        // }

                // Capturing By Reference:

                    // Capturing By Reference: Working on the original outside value...

                        // int c {42};

                        // auto func = [&c]() {
                            // std::cout << "Inner value: " << c << std::endl;
                        // };

                        // for (size_t i {}; i < 5; ++i) {
                            // std::cout << "Outer value: " << c << std::endl;
                            // func();
                            // ++c;
                        // }

