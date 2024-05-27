// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// For Loop:

    // Syntax:

        // for(unsigned int i{}; i < 10; ++i){
            // std::cout << "abcd" <<std::endl;
        // } // size_t is the recommended type for declaring iterators maybe instead of unsigned int.... and cause it is a representation of unsigned int so it can only represent positive numbers... // used to represent things like sizes in C++ like the numbers of students in a classroom for example cause it can never be negative, like number of seats in a car etc. etc so for these types of things we can use size_t type to represent the size of those things......

    // Pillars Of Any Loop:

        // Iterator // Iterator is a variable that we're going to be using to navigate through the loop and that variable in above syntax example is "unsigned int i{};" here... // the value denotes from where which value we want our loop to start... 

        // Starting Point

        // Test (controls when the loop stops)

        // Increment(Decrement) // the first part of the loop is that ++i or i++ or --i or i-- that we can see in above syntax example at line 12 // it is a part that keeps changing our iterator value to make our loop move forward.....

        // Loop body... // the curly braces "{}" in which we'll write the code that we'll want to execute repetitively... // the body of our loop...

    // Iterator Type:

        //  Iterators are a common thing in C++ code and they are not just used for loops like we are doing it here. There is a type we use to do iterators which is written in line 32 below and it makes our code much more readable:

        // size_t:

            // Not a type, just a type alias for some unsigned int type representation in our C++ compiler... // 8 bytes size maybe it depends so means it has quite a good range of values we can put in there.. and cause it is a representation of unsigned int so it can only represent positive numbers... // used to represent things like sizes in C++ like the numbers of students in a classroom for example cause it can never be negative, like number of seats in a car etc. etc so for these types of things we can use size_t type to represent the size of those things...

            // if we have only 1 statement we can skip the curly braces then...

        // Can Leave out the iterator declaration in the loop like in below example at line 40 by declaring our iterator in global scope like in example at line 40:

            // size_t i{};

         // for( ; i < 10; ++i){
            // std::cout << "abcd" <<std::endl;
        // }

        // Hard coded values inside loop etc. like in loop condition if we write i<10, if we'll want to change this 10 value to something else so we'll have to search for this value... so declaring variable in global scope with the value of 10 will be more easy to manageable so I think this means that the values that we'll use maybe alot or change alot so maybe we should declare them in global scope so we don't have to search for loop, function or anything etc. and we'll just change the value in variable and it will reflect wherever we had used that variable like in loops, functions etc like in example below:

            // const size_t Count {10}; // size_t uses for the representation of the sizes of things something we don't really want to be negative cause behind the scenes it is using unsigned int type which only takes positive values I think......

            // for (size_t j; j < Count; ++j){
                // std::cout << "abcd" << std::endl;
            // }

            // size_t to represent the type of your iterators in C++ for better code readability and this type is even used in the C++ standard Library... So we should try to use the code like this size_t type that is compliant with the C++ Standard Library. // size_t type is basically used for iteartors and to represent all sizes like number of students in a classroom and like number of seats in a car etc.

            // sizeof(size_t):

                // std:cout << "sizeof(size_t): " << sizeof(size_t) << std::endl; // this statement will show us the size of size_t type variable on the system where this code here is going to run.... on course teacher's system it was taking 8 bytes...
