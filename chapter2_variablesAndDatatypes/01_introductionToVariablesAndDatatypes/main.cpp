// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// In c++ there are many predefined datatypes or types, few of them are below:

    // 1) int
    // 2) double
    // 3) float
    // 4) char
    // 5) bool
    // 6) void // typeless type // it is really meaningful in functions.
    // 7) auto // it is really not a type, it is a keyword in c++ to deduce other types. // we'll se later in this course how this keyword works.


// Memory in ram looks like below:

    // [0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1]
    // [0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1]
    // [0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1]
    // [0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1]
    // [0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1][0][1]

    // Each of these zeroes and ones are a bit which a human may not understand, we can group these bits into little chunks so we can manipulate it, we can group these bits into 8 bits which makes a byte or we can group these bits into 16 bits depends upon the condition. Details in maybe next lecture.

    // If you really want you can treat each bit as a self-contained piece of data but this is really not very useful but there are some corner use cases for this.

// We can do the transformation between the representation of data, which we write in program like an int value 22 stored in a variable which is understandable by humans and the representation of data which is stored in the form of 0 and 1 in our ram memory through a way, which is called number systems.
    