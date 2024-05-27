// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Switch:

    // Alternative way to do what we did with these else if clauses in the last lecture basically testing for several different conditions but it's going to be in a much more compact way than what we did in the last lecture with else if clause...

    // condition in the switch case statement with case in C++ can only be an integer (like int, long, unsigned short, char, basically every integral type etc.) and enums (We'll learn later in this course Insha Allah...). // condition can't be like a string.

    // much cleaner construct than if, elseif, else...

    // same example that we did in the last lecture with else if clause but this time with switch statement:

        // Tools:

            // const int pen{10};
            // const int marker{20};
            // const int eraser{30};
            // const int rectangle{40};
            // const int circle{50};
            // const int ellipse{60};


        // int main(){
            // int tool {pen};

            // switch (tool){
             // case pen: {
                // std::cout << "Active tool is pen" << std::endl;
                // }
                // break; // for jumping out of of this switch statement...
                // case marker: {
                    // std::cout << "Active tool is marker" << std::endl;
                // }
                // break; 
                // case eraser: {
                    // std::cout << "Active tool is eraser" << std::endl;
                // }
                // break; 
                // case rectangle: {
                    // std::cout << "Active tool is rectangle" << std::endl;
                // }
                // break; 
                // case circle: {
                    // std::cout << "Active tool is circle" << std::endl;
                // }
                // break; 
                // case ellipse: {
                    // std::cout << "Active tool is eclipse" << std::endl;
                // }
                // break; 
                // default: {
                    // std::cout << "Can't match any tool..." << std::endl;
                // } 
            // } 
        // }

        // Note: in if, else if, else clause we used all the above cases like condition maybe in if, else if condition parenthesis, I think I didn't wrote that exam in else if notes but I think that's what we were doing there maybe....
         // Note: if no case will be matched then default block code will get executed...

    // We can also group a number of cases with a single block of code like we are doing with case rectangle, case circle and case ellipse in example below:

        // Tools:

            // const int pen{10};
            // const int marker{20};
            // const int eraser{30};
            // const int rectangle{40};
            // const int circle{50};
            // const int ellipse{60};


        // int main(){
            // int tool {pen};

            // switch (tool){
             // case pen: {
                // std::cout << "Active tool is pen" << std::endl;
                // }
                // break; // for jumping out of of this switch statement...
                // case marker: {
                    // std::cout << "Active tool is marker" << std::endl;
                // }
                // break; 
                // case eraser: {
                    // std::cout << "Active tool is eraser" << std::endl;
                // }
                // break; 
                // case rectangle: 
                // case circle: 
                // case ellipse: {
                    // std::cout << "Drawing tools" << std::endl;
                // }
                // break; 
                // default: {
                    // std::cout << "Can't match any tool..." << std::endl;
                // } 
            // } 
        // }