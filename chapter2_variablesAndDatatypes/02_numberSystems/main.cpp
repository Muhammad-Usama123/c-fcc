// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// If you really want you can treat each bit as a self-contained piece of data but this is not really very useful, but there are some corner use cases for this.

// We do the transformation between the representation of data that we wrote in program like an int value 22, stored in a variable which is understandable by humans and the representation of data which is stored in the form of 0 and 1 in our ram memory through a way, which is called number systems.

// Number Systems:

    // We have few types of number systems available to us that we can use. Examples of some of them are below:

        // 1) Binary.

        // 2) Octal.

        // 3) Hexadecimal.

        // Analyzation of Decimal System: // Decimal system base is 10.

            // 2371 -->> 2*10 power 3 + 3*10 power 2 + 7*10 power 1 + 1*10 power 0.

            // 924 -->> 9*10 power 2 + 2*10 power 1 + 4*10 power 0

            // 47 -->> 4*10 power 1 + 7*10 power 0

        // Analyzation of Binary Numbers System: // Binary Numbers system base is 2.

            // 100101 -->> 1*2 power 5 + 0*2 power 4 + 0*2 power 3 + 1*2 power 2 + 0*2 power 1 + 1*2 power 0. // it's going to evaluate in 37 in normal decimal number system // normal calculation of the right side expression will give us the decimal value.

            // 10010 -->> 1*2 power 4 + 0*2 power 3 + 0*2 power 2 + 1*2 power 1 + 0*2 power 0. // it's going to evaluate in 18 in normal decimal number system. // normal calculation of the right side expression will give us the decimal value.

            // 111 -->> 1*2 power 2 + 1*2 power 1 + 1*2 power 0. 

                // 1 digit binary value will always be in between 0 to 1 in decimal number system, and it means if we store values between 0 and 1 in our variable, it will make a 1 bit group in our ram memory.

                // 2 digits binary value will always be in between 0 to 3 in decimal number system, and it means if we store values between 0 and 3 in our variable, it will make a 3 bit group in our ram memory.

                // 3 digits binary value will always be in between 0 to 7 in decimal number system, and it means if we store values between 0 and 7 in our variable, it will make a 3 bit group in our ram memory.

                // 4 digits binary value will always be in between 0 to 15 in decimal number system, and it means if we store values between 0 and 15 in our variable, it will make a 4 bit group in our ram memory.

                // 5 digits binary value will always be in between 0 to 31 in decimal number system, and it means if we store values between 0 and 31 in our variable, it will make a 5 bit group in our ram memory.

                // n digits binary value will always be in between 0 to 2 power n and then -1 in decimal number system and it means if we store values between 0 and 7 in our variable it will make a 3 bit group in our ram memory.

                // means we can group the bits in different sizes of data and we have kind of formula, which we can use to make sense of the data in ram memory.

                // there are ways from which we can manipulate these different sizes of bit groups in c++.

                // In Practice:

                    // below are the few grouping of bits we have in practice.

                        // 8 Binary digits of ram memory (means 8 bits) = 1 byte and its data range is 0 to 255.
                        // 16 Binary digits of ram memory (means 16 bits) = 2 bytes and their data range is 0 to 65,535.
                        // 32 Binary digits of ram memory (means 32 bits) = 4 bytes and their data range is 0 to 34,359,738,367.
                        // 64 Binary digits of ram memory (means 64 bits) = 8 byte and its data range is 0 to 18,446,744,073,709,551,615.

        // Analyzation of Hexadecimal Number System: // We use the hexadecimal system to represent 4 bit groups binary numbers. // 0x hexadecimal symbol or representation maybe...

            // it is a technique we use to shorten the length of how we are going to represent a binary number in memory. Below is the example of how it works:

                // 0000 (Binary)  = 0 (Decimal) = 0 (Hex)      
                // 0001 (Binary)  = 1 (Decimal) = 1 (Hex)      
                // 0010 (Binary)  = 2 (Decimal) = 2 (Hex)      
                // 0011 (Binary)  = 3 (Decimal) = 3 (Hex)      
                // 0100 (Binary)  = 4 (Decimal) = 4 (Hex)      
                // 0101 (Binary)  = 5 (Decimal) = 5 (Hex)      
                // 0110 (Binary)  = 6 (Decimal) = 6 (Hex)      
                // 0111 (Binary)  = 7 (Decimal) = 7 (Hex)      
                // 1000 (Binary)  = 8 (Decimal) = 8 (Hex)      
                // 1001 (Binary)  = 9 (Decimal) = 9 (Hex)      
                // 1010 (Binary)  = 10 (Decimal) = A (Hex)      
                // 1011 (Binary)  = 11 (Decimal) = B (Hex)      
                // 1100 (Binary)  = 12 (Decimal) = C (Hex)      
                // 1101 (Binary)  = 13 (Decimal) = D (Hex)      
                // 1110 (Binary)  = 14 (Decimal) = E (Hex)      
                // 1111 (Binary)  = 15 (Decimal) = F (Hex)

                // We will use the hexadecimal system to represent 4 bit groups binary numbers.

                    // Example:

                        // 0x 6E30F13F // This 6E30F13F is hexadecimal value and each of these digits or characters in this hexadecimal value represents a 4 bit (digit) group binary number. This is shorter and easily manipulable by humans. // 0x before the starting of this hexadecimal value to show that this is a hexadecimal number. // If we have numbers that don't really fit in groups of 4 like below example:

                            // 1 0010 0100 1000 1011 1010 // here we can see that the 1st 1 is alone and not in group of 4.

                            // 0001 0010 0100 1000 1011 1010 // so we'll add 000 (the missing bits) before this 1st 1, this maybe the last one cause the teacher is saying we will start from left but in screen he is showing the value at right maybe, maybe this is because of reverse screen or maybe I am wrong about this reverse screen issue. // this operation is called padding.


        // Analyzation of Octal System: // this system is not widely used today. // divide our binary numbers in the group of 3

            // 000 (binary numbers) = 0 decimal = 0 octal
            // 001 (binary numbers) = 1 decimal = 1 octal
            // 010 (binary numbers) = 2 decimal = 2 octal
            // 011 (binary numbers) = 3 decimal = 3 octal
            // 100 (binary numbers) = 4 decimal = 4 octal
            // 101 (binary numbers) = 5 decimal = 5 octal
            // 110 (binary numbers) = 6 decimal = 6 octal
            // 111 (binary numbers) = 7 decimal = 7 octal

             // Example:

                // 0 15614170477 // this 0 before starting of this octal system value represents that this value is in octal system. // missing bits will add as 0.


        // 0b represents binary maybe.

        // int number1 = 15 // decimal.

        // int number2 = 017 // octal value of decimal 15 above at line 113. // 0 at starting represents octal value.

        // int number3 = 0x0f // hexadecimal value of decimal 15 above at line 113. // 0x at starting represents hexadecimal value.

        // int number4 = 0b00001111 // binary value of decimal 15 above at line 113. // 0b at starting represents binary value. 

        // c++ 14 feature.

        // we can use uppercase or lowercase alphabets in hexadecimal values, it is not case sensitive.
        
