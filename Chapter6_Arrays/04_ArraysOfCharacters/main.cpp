// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Arrays Of Characters:

    // Declaration:

        // char message[5] {'a', 'b', 'c', 'd', 'e'};

    // print out the above array at line 12 using range based for loop:

        // for( auto i : message){
            // std::cout << i; // it will print abcde in console...
        // }

    // Can also modify elements of a char array..

    // Direct print out a char array without using a loop but this works on a proper C string like in line 24/Null Termination: (tells the std::cout that we have reached the end of the string..)

        // char message[5] {'a', 'b', 'c', 'd', 'e', '\0'}; // a proper C string cause of this "'\0'" in the array and this "'\0'" is called a Null Termination String and it tells C++ that we have hit the end of the string... // if we don't use this "'\0'" and try to print a char array without loop like in line 26 below, it'll may print some garbage characters in the console...

        // std::cout << message << std::endl;
        // std::cout << std::size(message) << std::endl;

    // Auto filled in null characters:

        // char message1[6] {'a', 'b', 'c', 'd', 'e'}; // cause we use the size 6 and initialized 5 char values in this array so the 6th one will automatically initialized from '0' version of a character and that happens to be the null terminator of the null termination character so this is going to print correctly without loop Insha Allah... // and if we don't mention the size of char array during declaration and initialization of that array then this won't work in that situation maybe and we'll maybe get some garbage value...

    // Literal C-strings/ Null Terminated String:

        // We can also define a literal c string using char type like in below example at line 37:

            // char message4 [] {"abcde"}; // '/0' character is appended with this type of string... // recommended way to initialize our char type arrays in C++.. // we can put spaces between words in this type of array...

    // single qoutes for separate characters in char type array and double quotes for writing whole thing in that double quote...
