// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Capture All In Context:

    // We can capture everything living outside the context of the lambda function...:

        // Capture All By Value:

            // Capturing Everything By Value:

                // int c{42};

                // auto func = [=](){
                    // std::cout << "Inner value: " << c << std::endl;
                // };

                // for (size_t i {}; i < 5; ++i){
                    // std::cout << "Outer value: " << c << std::endl;
                    // func();
                    // ++c;
                // }

        // Capture All By Reference:

            // Capturing Everything By Reference:

                // int c{42};
                // double d{12.1};

                // auto func = [&](){
                    // std::cout << "Inner value c: " << c << std::endl;
                    // std::cout << "Inner value d: " << d << std::endl;
                // };

                // for (size_t i {}; i < 5; ++i){
                    // std::cout << "Outer value c: " << c << std::endl;
                    // std::cout << "Outer value d: " << d << std::endl;
                    // func();
                    // ++c;
                    // d += 0.5;
                // }