// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Revisit Our Idea Of A C++ Program Memory Map:

    // pic captured of C++ program memory map through lightshot with the name of "revisit_our_idea_of_C++_program_memory_map" in this pc...
    // pic captured of C++ program memory map updated after describing (Real Memory = Ram), (Virtual Memory = (2^n)-1) and memory map below and also the updated version of .exe file (whose unupdated version is written at starting from line 38 to ending at line 48 below, and whose updated version is written at starting from line 61 to ending at line 83) below through lightshot with the name of "revisit_our_idea_of_C++_program_memory_map_updated" in this pc...

// How we write our C++ program in IDE:

    // # include <iostream>

    // int add_numbers(a, b){
    //     return a + b
    // }

    // int main(){
    //     int a = 10;
    //     int b = 5;
    //     int c;

    //     std::cout << "statement1" << std::endl;
    //     std::cout << "statement2" << std::endl;
    //     c = add_numbers(a, b);
    //     std::cout << "statement3" << std::endl;
    //     std::cout << "statement4" << std::endl;
    //     return 0;
    // }

// Now after writing the above C++ code (starting from line 14 and ending at line 31 above) in our IDE using C++ program extension file, when we'll click on build with gcc etc. it will send our code to compiler to compile the above C++ code and then it will return us a binary excutable file of this above C++ prrogram, which is a binary representation of the above code that we wrote above in our IDE... we can then run our above program on an operating system, for example right now I'm using windows 10 and if I run my binary executable(.exe) file by double cliking on it in my windows 10, for example our applications(those binary executable files that we created in our this course by compiling our C++ program code that we wrote in our IDE using .cpp extension) are called rooster.exe file here in this course... if we'll double click on our binary executeable file or open it through our terminal, like in our vscode terminal for example, in our operating system, that binary executable file will be loaded in our computer memory (random access memory RAM(the memory that is going to be actively running things in our computer, which in our computer is called RAM...) and not hardware or ssd storage...) and it's going to be stored in a special section of memory called "program area" and so far we've maybe been thinking that our program will be really loaded in real memory on our computer, but that's not the case, it is an idea of the memory, that the program thinks that it has, but it's not the real thing and teacher is gong to explain this but before he'll explain this, he's asking us to let him elaborate on the reason that why this is done, lot's of programs running ( we might have hundreds or thousands of programs running on our computer...) on our OS, we can quickly run out of memory if our each program is going to use real memory on our computer, so the idea was born to create what is called "Virtual Memory", which is defined below at line 49...



// The compiled code (starting from line 14 and ending at line 31 above) in our binary executable file will maybe look like this:

    // a = 10 (int)
    // b = 5 (int)
    // c (int)
    // print("statement1")
    // print("statement2")
    // c = f_add(a, b)
    // print("statement3")
    // print("statement4")
    // end

    // Virtual Memory:

        // A trick that fools your program into thinking it is the only program running on our OS, and all memory resources belong to it... Each program is abstracted into a process (you can think of .exe file as a process on the system...) has access to the memory range 0 ~ (2^N) - 1 or in other words (2 to the power of N)-1, where N is 32 on 32 bit systems and 64 on 64 bit systems...   

    // Memory Map:

        // The view that's our program has of that memory (Virtual Memory) is called a "memory map"...

    // Real Memory = RAM
    // Virtual Memory = (2^n)-1 

// Updated version of statement that we wrote at line 34 above:

    // Now after writing the above C++ code (starting from line 14 and ending at line 31 above) in our IDE using C++ program extension file, when we'll click on build with gcc etc. it will send our code to compiler to compile the above C++ code and then it will return us a binary excutable file of this above C++ prrogram, which is a binary representation of how things are going to be laid out  in memory in our program like at line 65 to line 87 below and now if we run our program, it is going to go through a section of the CPU called Memory Management Unit(MMU)... // lightshot pic of memory map from after the process of when we'll double click on .exe file to it gets going through the section of the CPU called "Memory Management Unit" save in this pc with name of "memory_map__after_executing_.exe_file_on_our_operating_system_by_going_through_the_section_of_a_CPU_called_memory_management_unit"

    // Updating The Idea Of The Program Execution Model (Binary executable .exe file), which we wrote above at starting from line 37 and ending to line 47...: //

        /*
        Address:        Content:
        0               x
        0               x
        4               x
        8               x
        0               x
        ...             x
        0               x
        1024            x
        1028            x
        ...             x
        ...             x
        100000          x
        ...             x
        ...             x
        ...             x
        ...             x
        ...             x
        2^n             x
        */

       // The entire program is not loaded in real memory by the CPU and MMU. Only parts that are about to be executed are loaded. Making effective use of real memory, a valuable and lacking resource... Memory management unit helps out in mapping between memory map that we have in the program (the idea that your program has of memory) and the real thing that we have in memory... pic of memory map of multiple programs running through "Memory Managament Unit" by the real memory RAM through lightshot with name "multiple_programs_running_through_Memory_Management_Unit_MMU" saved in this pc... pic of memory map of multiple programs running through "Memory Managament Unit" by the real memory RAM through lightshot with name "single_program_running_through_Memory_Management_Unit_MMU" saved in this pc...

    // Virtual Memory:

        // The memory map is a standard format defined by the OS. That's why for example you can't take an executable that was setup on Windows OS and directly run it on Linux OS. All programs written for that OS must confirm to it(the memory map that our OS has defined). It is usually divided into some sections... so all programs on windows OS, if we had a way to go in and look at the memory map, they're going to be pretty similar... so we have been talking about the memory map but what does it look like? so the pic of what does the memory map look like, pic taken through lightshot with the name "What_does_memory_map_looks_like" saved in this pc...so we are going to have a bunch of memory locations from 0 to (2^n)-1. And the memory map is really divided into a lot of parts, Starting part of it maybe assigned to system section, then stack section, then heap section, then data section, and then text section and this is one of the views, we can have on this, there are a few different versions of this pic, that we're going to see on the internet, but what is really important is stack and heap for our purposes here, stack is what is going to store our local variables...

    // Text section maybe looks like the code above at starting from line 38 to line 48. Going to load the actual Binary of our program, so that the CPU can execute it...
    // Stack section maybe looks like the code above at starting from line 40 to line 42, then we had inside functions at line 45 above, these things are maybe stored inside the stack section of our memory map... // Stack section maybe stores local variables, and function calls, ......
    // Additional memory that can be queried for at run time is maybe called heap section of the memory map, heap memory is actually going to be very important from the next lecture, when we'll start talking about Dynamic Memory... 

    

    

