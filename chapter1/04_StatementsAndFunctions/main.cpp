# include <iostream>

int main(){
    auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
    std::cout << result << std::endl;
}

// Statements:

    // basic unit of computation in a c++ program.

    // Every c++ program is a collection of statements organized in a certain way to achieve some goal.

    // Statements end with a semicolon (;) in c++.

    // Statements are executed in order from top to bottom.

    // Execution keeps going until there is a statement causing the program to terminate, or run another sequence of statements.

// Variables are a way to store data in our program.

// Functions:

    // A function must be defined before it's use.

    // Function Prototype definition in c++ is maybe not necessary.

// int first_number {7}; // we can also declare variables and store their values in curly braces like this.