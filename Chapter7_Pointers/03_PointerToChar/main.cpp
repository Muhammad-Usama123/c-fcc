// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Pointer To Char: 

    // Special like char arrays...

    // Now the special thing in pointers to char type variables is you can initialize that with a string literal(C-String) like in below example at line 14:

        // char* p_message { "abcde world!"}; // the string here is going to be expanded into a char array and the 1st character of our array is going to be pointed to by this p_message pointer variable here. // arrays and pointers have a really strong relationship in C++ and we'll learn about that in detail later in this course Insha Allah... // some compilers can maybe refuse to compile this type of code cause maybe this string is going to be turned into a const char array and in this line we are not using a const char pointer so that's why maybe, so the solution maybe is we'll declare this pointer as const char* pointer and the first element of this array is going to be pointed to by this char pointer...... // this pointer here can be used to try and modify data into an array of const char and that's can be going to be disastrous because if we'll try to modify, that's maybe going to fail... // use const in this type of case otherwise maybe compiler error... // this char array not modifiable cause of const... // if you don't want to modify the string then use this method other wise use a normal char array c-string method if you want to modify something later or want any user to modify something from that string then normal array is good but remember to use const with this char pointer declaration....

        // std::cout << p_message << std::endl; // it will print the string that we stored in above line 14...

        // std::cout << *p_message << std::endl; // it will print only 'a' that we stored in above line 14...

        // *p_message = 'b'; not work maybe cause compiler will turn the above declared string stored in char string pointer into const char variable and modifying a const variable or array is not allowed in C++... // compiler error or crash at runtime...