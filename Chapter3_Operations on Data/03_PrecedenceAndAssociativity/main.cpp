// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Precedence And Associativity:

    // Precedence:

        // is a set of rules which we can follow to know what to do when we have multiple operators in the same expression like in below example and this is presedence in which multiply and divide operations will happen first and then addition subtraction:

        // Example:

        // int a {6};
        // int b {3};
        // int c {8};
        // int d {9};
        // int e {3};
        // int f {2};
        // int g {5};

        // int result = a + b * c - d / e - f + g; // 6 + 24 - 3 - 2 + 5 addition subtraction left to right associativity according to c++ precedence table... link in line 38 and according to this addition and subtraction have left to right associativity so after multiplication and division it will do addition and subtraction from left to right and same associativity case for multiplication and division I think means left to right, we'll confirm from the table Insha Allah... so first 6 + 24, then answer - 3, then answer -2 and then answer + 5 so result = 30... 

        // int result1 = a/b*c+d-e+f; // 24 cause in multiplication and division associativity I think says left to right so first we'll divide a by b I think and then multiply the answer with c and then add the answer with d and then subtract the answer from e and then add the answer with f I think...

        // for explicitly telling the compiler which operation to do 1st we can put that operation in parenthesis and compiler will do that calculation 1st like in below example:

            // int result = a + (b * c) - (d / e) - f + g; now compiler will do the operations in parenthesis first then other operations according to precedence table and it is maybe good for readability...

            // int result = (a + b) * c - d / e - f + g; now compiler will do the operations in parenthesis first then other operations according to precedence table and it is maybe good for readability...

            // for beginners parenthesis is recommended then precedence table and it is more readable....

    // Associativity:

        // but what when we have addition and subtraction operators in the same expression and this problem gets solved by associativity. Associativity defines if you do the operations from the left or from the right.

    // Summary Of Precedence and Associativity:

        // Precedence:

            // Which operation to do first.

        // Associativity:

            // Which direction or which order. // Some operators are going to be left associative and that means we'll start evaluating them from the left. And some operators are going to be right associative. // "cppreference.com" for C++ Operators' presedence and associativity table.


    