// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Functions Across Multiple Files: Compilation Model Revisited:

    // One File Program:

        // # include <iostream>

        // int add_numbers (int a, int b) {
            // return a + b;
        // }

        // int main() {
            // int a = 10;
            // int b = 5; 
            // int c;

            // std:: cout << "Statement1" << std::endl;
            // std:: cout << "Statement2" << std::endl;
            // c = add_numbers(a, b);
            // std:: cout << "Statement3" << std::endl;
            // std:: cout << "Statement4" << std::endl;

            // return 0;
        // } 

    // Now this 1 file program will go into compiler whenever we'll tell it to compile maybe for compile into binary executable file maybe and then it will look like below code starting from line 34 below and ending at line 42 below maybe, after compilation of above code under "One File Program" heading starting from line 10 above and ending to line 30 above.. 

        // a = 10           (int)
        // b = 5            (int)
        // c                (int)
        // print("Statement1")
        // print("Statement2")
        // c = f_add(a, b)
        // print("Statement3")
        // print("Statement4")
        // end

    // Now we're going to zoom in in the 2nd and mid process when we call compilation of program and the 2nd process is our C++ program goes into compiler... So far we were seeing this above 3 process example for 1 file, but now we're going to zoom in in the 2nd proces which is when our C++ multiple files program (multiple source files program means the C++ program in which we wrote code in multiple files) goes into compiler and what happens behind the scenes with these multiple source files of program is when they go into the compiler 1st there are these multiple source files of our C++ program (the files in which we wrote our this whole C++ program) then they go through the process of "Preprocessing" in the 2nd step and what this "Preprocessing" process do is, it's going to look for your include statements and it's going to replace the include statement with whatever file you are including and it is going to paste that file in place of that include file statement like "#include <iostream>" it is going to be replaced by whatever we have in this "iostream" library file(copy whatever inside this iostream library file or any other included file and will paste it on the place of "#include <whatever library file>"), and then after this preprocessing stage it gives us a version of our source files with the included parts put in our source files and these new version of our source files are called "Translation Units" (these are translation units in a C++ program...) and then once you have these translation units, then in the next step the compiler is going to compile those translation units files (these translation units files are going to go through the compiler) and then the compiler is going to generate, what we call an object file and this is a binary representation of the content you have in your translation unit, so each translation unit is going to generate one object file and for example if you had 20 translation units in your program, we're going to have 20 object files, once we have object files, they are going to be processed by what we call the linker and the linker is going to stitch them together and have one single binary file out of all these object files...

    // So now we know that in the above compilation model when our files go through compiler, behind the scenes they go through 3 processes inside the compiler:

        // 1) Preprocessing...
        // 1) Compilation...
        // 1) Linking...

    // splitting C++ program function files into 2 1 will contain prototypes of functions in .h extension file and 1 will contain functions implementation in .cpp extension file and then we'll use those functions in our main.cpp file for calling those functions and for printing those functions' results into terminal in below code starting from line 54 to ending at line 84...:

        // 1) comparisions.h:

            // int max(int a, int b);
            // int min(int a, int b);

        // *) comparisions.cpp:

            // implementation...

        // 2) operations.h:

            // int incr_mult(int a, int b);

        // *) operations.cpp:

            // implementation...

    // Main File:

        // #) include <iostream> // Format for standard headers
        // #) include "comparisions.h" // Format for custom headers // it is called "include directive" or "include preprocessor directive"... // header file (.h extension)...
        // #) include "operations.h" // Format for custom headers

        // int main (int argc, char **argv) {
            // int a {3};
            // int b {4};

            // std::cout << "max: " << max(a, b) << std::endl;
            // std::cout << "min: " << min(a, b) << std::endl;
            // std::cout << "incr_mult: " << incr_mult(a, b) << std::endl;
        // }

            // ODR (One Definition Rule):

                // The same function implementation can't show up in the global namespace more than once...

            // The linker searches for definitions in all translation units (.cpp) files in the project. Doesn't have to live in a .cpp file with the same name as the header...

            // We'll have to follow this splitting functions into 2 different files 1 with .h extension and 1 with .cpp extension, .h extension file for function prototype and .cpp file for function definition other than main.cpp file maybe...

            // We can define functions definition in any translation unit... means maybe in any .cpp file means it doesn't have to contain the same name of file in which we define headers of the functions or protypes of the functions but good practice and for organizational purposes it is recommended to make .cpp file with same names as headers and define the function definition in that .cpp file, whose prototype we defined in .h extension file with same file name as .cpp file name... translation unit is mostly equivalent to a .cpp file... // functions definitions should always defined in .cpp file... each translation unit is maybe made up of each .cpp file maybe in our C++ program... // ld is the linker error in gcc compiler and LNK is linker error in MSVC compiler maybe...// if our headers are defined but linker is not able to find the function definitions it will through us linker error when we'll try to compile that c++ program...