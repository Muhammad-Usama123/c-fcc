// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Function Overloading Introduction:

    // int max(int a, int b); 
    // double max(double a, double b);
    // std::string max(const std::string& a, const std::string& b);

        // Function overloading is a mechanism we have in C++, to have multiple copies of the same function, but taking different parameters... // above functions starting from line 10 to ending at line 12 examples are different overloads of the same function... // compiler will automatically choose the overload of the function from the above written 3 functions, starting from line 10 to ending at line 12, by seeing the type of arguments, like if we'll pass int arguments, the compiler will choose the int version automatically, from above 3 functions, if we'll pass std::string type arguments, the compiler will choose the std::string type function automatically, from above 3 same named functions (correct function overload), with same type arguments... // flexibility...

            // max (a, b);
