// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// If you really want you can treat each bit as a self-contained piece of data but this is really not very useful but there are some corner use cases for this.

// We do the transformation between the representation of data that we wrote in program like an int value 22 stored in a variable which is understandable by humans and the representation of data which is stored in the form of 0 and 1 in our ram memory through a way that is called number systems.

// Number Systems:

    // We have few types of number systems available to us that we can use example of some of them is below:

        // 1) Binary.

        // 1) Octal.

        // 1) Hexadecimal.

        // Analyzation of Decimal System: // Decimal system base is 10.

            // 2371 -->> 2*10 power 3 + 3*10 power 2 + 7*10 power 1 + 1*10 power 0.

            // 924 -->> 9*10 power 2 + 2*10 power 1 + 4*10 power 0

            // 47 -->> 4*10 power 1 + 7*10 power 0

        // Analyzation of Binary Numbers System: // Binary Numbers system base is 2.

            // 100101 -->> 1*2 power 5 + 0*2 power 4 + 0*2 power 3 + 1*2 power 2 + 0*2 power 1 + 1*2 power 0. // it's going to evaluate in 37 in normal decimal number system // normal calculation of the right side expression will give us the decimal value.

            // 10010 -->> 1*2 power 4 + 0*2 power 3 + 0*2 power 2 + 1*2 power 1 + 0*2 power 0. // it's going to evaluate in 18 in normal decimal number system. // normal calculation of the right side expression will give us the decimal value.

            // 111 -->> 1*2 power 2 + 1*2 power 1 + 1*2 power 0. 

                // 1 digit binary value will always be in between 0 to 1 in decimal number system and it means if we store value between 0 and 1 in our variable it will make a 1 bit group in our ram memory.

                // 2 digits binary value will always be in between 0 to 3 in decimal number system and it means if we store value between 0 and 3 in our variable it will make a 3 bit group in our ram memory.

                // 3 digits binary value will always be in between 0 to 7 in decimal number system and it means if we store value between 0 and 7 in our variable it will make a 3 bit group in our ram memory.

                // 4 digits binary value will always be in between 0 to 15 in decimal number system and it means if we store value between 0 and 15 in our variable it will make a 4 bit group in our ram memory.

                // 5 digits binary value will always be in between 0 to 31 in decimal number system and it means if we store value between 0 and 31 in our variable it will make a 5 bit group in our ram memory.

                // n digits binary value will always be in between 0 to 2 power n and then -1(or n-1 power maybe) in decimal number system and it means if we store value between 0 and 7 in our variable it will make a 3 bit group in our ram memory.

                // means we can group the bits in different sizes of data and we have kind of formula that we can use to make sense of the data in ram memory.

                // there are ways from which we can manipulate these different sizes of bit groups in c++.
