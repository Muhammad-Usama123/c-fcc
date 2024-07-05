// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Introducing std::string:

    // Type that is going to make it super easy to work with string data in C++... // High level type.. // saves us from keeping track of string array count and also saves from to take care of the null character in the string array...

        // std::string:

            // '', 'A', 'b', 'c', 'd', 'e', '\0', '' // What this std::string type is going to do is that it is going to wrap on top of the ugly array computations, we have been doing on character arrays... we'll be able to do many of the things on this string type like concatenation, copy, search etc. etc. but in a much better way as compared to like we were doing on the c-strings... all we'll have to do with this type is store our text simply whatever we want to store in our string... we won't have to use pointers for declaring and initializing a string, we won't have to use arrays for declaring and initializing strings, we can simply use this std::string type...