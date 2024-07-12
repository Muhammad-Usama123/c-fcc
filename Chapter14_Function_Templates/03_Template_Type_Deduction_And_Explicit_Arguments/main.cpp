// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Template Type Deduction And Explicit Arguments:

    // template <typename T> T maximum (T a, T b);

    // int main (int argc, char **argv) {
        // int a {10}; 
        // int b {23}; 
        // double c {34.7}; 
        // double d {23.4}; 
        // std::string e {"abcde"}; 
        // std::string f {"world"};

        // maximum(a, b); // int type deduced...
        // maximum(c, d); // double type deduced...
        // maximum(e, f); // std::string type deduced...

        // maximum<double>(c, d); // explicitly say that we want the double... // version called, if an instance is not there already, it will be created...
        // maximum<double>(a, c); // Works, even if parameters are of different types, there is implicit conversion from int to double for the first parameter...
        // maximum<double>(a, e); // Error: can't convert std::string to double...

        // return 0;
    // }