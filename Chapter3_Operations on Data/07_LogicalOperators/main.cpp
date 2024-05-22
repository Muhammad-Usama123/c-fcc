// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Logical Operators: 

    // These operators will work on boolean operands...

    // && // and operator: 

        // if any of the operands is false the result is going to be false normally...

            // false && false // false
            // false && true // false
            // true && false // false
            // true && true // true

    // || // or operator:

        // if any of the operands is true the result is going to be true normally...

            // false && false // false
            // false && true // true
            // true && false // true
            // true && true // true

    // !  // not operator // turns true into false and flase into true... // negating

    // Combine Logical Operators in expression:

        // bool a {true};
        // bool b {false};
        // bool c {true};

        // std::cout << "!(a && b)" || c: " << (!(a && b)" || c) << std::endl;

    // Logical And Relational Operators Combined In Expressions:

        // int d {45};
        // int e {20};
        // int f {11};

        // std::cout << "(d > e) && (d > f): " << (( d > e ) && ( d > f )) << std::endl;
        // std::cout << "( !a ) && ( d == e ): " << (( !a ) && ( d == e )) << std::endl;
        
        // more examples in pic saved in pc with the name of maybe LogicalAndRelationalOperatorsCombined...

