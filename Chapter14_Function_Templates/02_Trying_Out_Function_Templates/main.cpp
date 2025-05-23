// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Trying Out Function Templates:

    // template <typename T> T maximum(T a, T b); // because we are using same T for types so all types must be same, like the return type, the parameters type etc., when calling this function...

    // int main (int argc, char **argv){
        // 
        // int a {10};
        // int b {23};

        // double c {34.7};
        // double d {23.4};

        // Std::string e {"abcde"};
        // Std::string f {"world"};

        // std::cout << "max(int): " << maximum(a, b) << std::endl; // int version created...
        // std::cout << "max(double): " << maximum(c, d) << std::endl; // double version created...
        // std::cout << "max(string): " << maximum(e, f) << std::endl; // string version created...

        /*
        ...
        */

        // return 0;
    // } 

    // template <typename T> T maximum(T a, T b){
        // return (a > b) ? a : b; // a and b must support the > operator. Otherwise, hard error...
    // } // function templates are not real C++ code, they are just blue prints but compiler generates function from this when the function is called, compiler sees the function parameters' datatypes and then generate a function from this blueprint according to parameters' datatypes, when the function gets called by the compiler...

        // *) Function templates are just blueprints. They're not real C++ code consumed by the compiler. The compiler generates real C++ code by looking at the arguments you call your function template with...

        // *) The real C++ function generated by the compiler is called a template instance...

        // *) A template instance will be reused, when a similar function call (argument types) is issued. No duplicates are generated by the compiler...

        // *) Sometimes we'll won't get the correct result from these function templates like we want, like if we'll use this maximum function template and pass it pointers as arguments it will compare the maximum of the addresses of our actual values and not the actual values and will give us the result according to that cause a pointer stores the address of a variable and not the actual value and for actual value we dereference it...

        // Note : std::string type maximum is computed according to lexicographical...

        // we can setup multiple function templates...

        // we'll need to debug our code, if we'll be using function templates...

