// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Math Functions:

    // #include <cmath> built in standard library in C++ for Math operations.

        // Reference Doc:

            // en.cppreference.com/w/cpp/header/cmath // there are alot more functions in documentation lots or almost all of them are different version of below defined math functions maybe...

        // Some of the math operations are below:

            // std::floor() // round down..

            // std::ceil() // round up...

            // std::abs() // absolute value... // absolute value is the weight of the number without caring about the sign. // it prints negative or positive value without sign I think in terminal...

            // std::cos() // cos thita maybe... 

            // std::exp() // for computing the exponential of a number.. //exp: f(x) = e ^ x   // e constant value = 2.71828... // "^" power of sign

            // std::log() // reverse of the "std::pow()" function maybe, basically saying to which power we should elevate e to cause e is set as default base, to get the provided number in the bracket of this function... // by default works in base e // e constant value = 2.71828...// "std::log10()" to which power we should elevate 10 to cause we set 10 as a base by saying log10, to get the provided number in the bracket of this function... 

            // std::pow(3, 4) // 3 to the power 4... // for power

            // std::sqrt() // square root..

            // std::round // round off value... // 2.5 will maybe rounded up to 3 and 2.4 will round down to 2...

            // std::sin() // sin thita maybe... 

            // std::tan() // tan thita maybe... 

            // cos, cosf(C++11), cosl(C++11), acos, sin, asin, tan, atan, atan2 almost all trigonometry functions like thgem and all of their f and l versions too are maybe available in this <cmath> library.... // host of trigonometric functions pic in pc.