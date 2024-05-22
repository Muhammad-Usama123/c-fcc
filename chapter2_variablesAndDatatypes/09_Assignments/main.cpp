// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Assignments:

    // int var1{123}; // declare and initialize // means after declaring and initializing the variable and value of var 1 like we are doing in this line, we can assign a new value to this variable like we are doing in line 18. // we saw int, doubles, booleans examples but maybe we can use this with every datattype but be careful about example at line 12 about auto type... 1 thing we'll have to be really careful about if we are doing auto type deduction like in example below:

        // Careful about auto assignments:

            // auto var3 {333u}; // Declare and Initialize with type deduction...

            // var3 = -22; // Assign negative number. Danger! // Garbage value...

    // var1 = 55; // Assign 