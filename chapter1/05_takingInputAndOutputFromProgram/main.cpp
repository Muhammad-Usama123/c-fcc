// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Keywords for printing the output from program and taking input in program:

    // Std::cout // printing data to the console(terminal). <<
    // Std::cin // reading data from the terminal. >>
    // Std::cerr // printing errors to the console. <<
    // Std::clog // printing log messages to the console. <<

    // << is for printing something from our program into terminal or console.
    // >> is for taking data from our terminal as input from user using "std::cin" and getting that data from terminal into our program..


    // Std::getline(std::cin, fullname) // through this "std::getline" user can use spaces maybe while writing the input in the terminal.

# include <iostream>
# include <string> // library to allow our program to store strings.


int main(){
    /*
    // printing data
    std::cout << "abc c++20" << std::endl;

    int age {21};
    std::cout << "Age : " << age << std::endl;

    std::cerr << "Error message: Something is wrong maybe" << std::endl;

    std::clog << "Log message: Something happened maybe" << std::endl;
*/
    // Taking input from the user from terminal into our program:

        // Data Input Without Spaces: // normal behaviour of c++
/*
    int age1;
    std::string name;

    std::cout << "Please type your name and age : " << std::endl;
    // std::cin >> name;
    // std::cin >> age1;

    // std::cin >> name >> age1; // chaining // grabbing different data in one line. // works same as code in line 43 and 44.

    // std::cout << name << " you are " << age1 << " years old!" << std::endl;
*/
    // How to grab data with spaces: // because if we tried to use spaces when inputting the data in terminal, from line 37 to line 48 above, the program is going to fail miserably.

        // Data Input With Spaces: // needs special way to do it in c++

            std::string full_name;
            int age;

            std::cout << "Please type in your full name and age " << std::endl;
            std::getline(std::cin, full_name);

            std::cin >> age;

            std::cout << full_name << " you are " << age << " years old!" << std::endl;

            


    return 0;
}

