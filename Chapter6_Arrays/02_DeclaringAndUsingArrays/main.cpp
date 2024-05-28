// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Declaring Arrays:

    // arrays store elements of the same type in C++ otherwise compiler error...

    // int scores[10]; // An array storing 10 integers. // once array is declared with its size its going to occupy like in this case space of 10 integers in our memory (4 bytes each maybe) under the name of scores and there will be garbage value stored inside it.... remember your array bounds or boundaries or array size, cause maybe c++ allows if we do something like this scores[11] but we declared the array of 10 integers and it has index from 0 to 9 so if we'll refer to 11th index it may give a garbage value or maybe Allah forbids can crash our operating system if we Allah forbids do that in our some C++ application...

// Accessing the values of An Array:

    // std::cout << scores[0] << std::endl; // Accessing value in array at 0th index means 1st value in array...
    // std::cout << scores[1] << std::endl; // Accessing value in array at 1st index means 2nd value in array...

// Looping through an array Or reading data of an array through loops:

    // for(size_t i {0}; i < 10; ++i){
        // std::cout << scores[i] << std::endl;
    // }

// Writing data In An Array:

    // scores[0] = 20;
    // scores[1] = 21;
    // scores[2] = 22;

    // scores[22] = 23; // writing out of bounds or boundaries or size of an array is bad...

// Writing Data Through Loops In An Array:

    // for(size_t i{0}; i < 10; ++i){
        // scores[i] = i * 3;
    // }

// Initialize the array at declaration Or Declaring and Initializing the elements of an array in a single statement:

    // double salaries [5] {12.7, 7.5, 13.2, 8.1, 9.3};

        // Accessing the values of above declared array name "salaries" at line 39 through loops and printing them in terminal:

            // for(size_t i {0}; i < 5; ++i){
                // std::cout << salaries[i] << std::endl
            // }

// Note: If you won't initialize all the elements of array they will get initialized to 0...

// Note we can declare arrays without mentioning its size like we'll only write "[]" with the array name and won't put any size in it so the compiler will automatically deduce the size of our array from our initialized elements, like in the example below:

    // int class_sizes[] {10, 12, 15, 11, 18, 17}; // our compiler will automatically deduce the size as 6 cause we initialized 6 elements in this array... // if we just declare the element without mentioning its size and also without initializing the values of this array in same statement we're going to get compiler error cause compiler won't know which size the compiler should give to this array...

    // printing the above class_size array's element's values declared above at line 51 by using range based for loop:

    // Range based for loop: // comes in handy when we don't know the size of array cause if somebody comes and add an additional element in this array then the size will change... range based for loop use the size that whatever that array has that we are looping on so if somebody adds another element in this array in which we didn't define the size the range based for loop will automatically detect the size, so we won't have to modify this range based for loop...

    // for(auto value : class_sizes){ // another way to print the values of elements of an array in terminal... 
        // std::cout << value << std::endl;
    // }

    // also possible to declare const arrays, but by doing this we won't be able to modify the elements of the array...

// Operations On Data Stored in arrays:

    // Sum up above declared scores array at line 10 and store result in sum variable in below example:

        // int sum {0};

        // for (int element : scores){
            // sum += element;
        // }

        // std::cout << sum << std::endl;



    