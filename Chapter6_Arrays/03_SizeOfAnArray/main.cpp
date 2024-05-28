// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Size Of An Array:

    // we're going to see a way through which we can query for the size of an array at runtime...

    // int scores[] {1, 2, 3, 4, 5, 6, 7};

    // std:cout << std::size(scores) <<std::endl; // this std::size(scores) will give us the size of the above array at line 12 named "scores" whose size is not mentioned in the "[]" above at line 12... // this std::size(scores) comes with the C++ standard library... // introduced in C++ 17... // before C++ 17 there was a hack "size_t count {sizeof(scores)/sizeof(scores[0])}" // range based for loop is best for the array whose size we don't know...

    // Print the data using "std::size(variable name of the array)" with for loop:

        // for(size_t i {0}; i < std::size(scores); ++i){
            // std::cout << scores[i] << std::endl;
        // }

// Note: if we just want to print the values of array without any usage of index using range based for loop, but if need access to array's indexes too in our for loop then we can use the traditional for loop...