// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// If, Else, Else if Statement:

    // Doing things conditionally...
    // we can also use expressions as conditions but the expression should be evaluate into something that we can treat like a boolean or boolean itself...
    // Whichever statement's condition will be true it's code will execute...
    // If the block of a statement succeeds all the other blocks in that same if, else if, else chain are not going to execute...

    // if(){}
    // else if(){} // testing for several different conditions...
    // else{}

    // Nested if: 

        // if (green)
        // {
            // if (/police_stops)
            // {
                // "stop"
            // }
            // else{
                // "go"
            // }

            /* code */
        // }

    // Nesting Alternative (through Logical Operators) Of Same Example Above Under Nested if heading (better way instead of doing nested if):

        // if(green && !police_stop){
            // "go"
        // }
        // else{
            // "stop"
        // }

        // Note : from above example we can see that we can also combine Logical Operators with the conditional programming techniques that we are learning about here to do really powerful stuff...
    

