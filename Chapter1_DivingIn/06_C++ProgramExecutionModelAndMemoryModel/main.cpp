// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// When we write a c++ program and convert it into a binary executable .exe file it gets stored in our hardware. When we double click on this binary executable file or open it in terminal it gets stored in ram in maybe 3 sections. In 1st section all of our statements gets stored in our ram memory one by one, like if statement one gets stored in at address 0001 in our memory then the 2nd statement will get stored in 0002 address in our memory maybe and like this all of our statements will get stored in our ram memory in maybe contigous memory blocks. In 2nd section when the cpu will reach to those lines of statements in which we are declaring variables and maybe initializing values too in those declared variables so in the 2nd secrtion all of our variables with their values will get stored in this 2nd section of our ram memory in maybe contigous blocks and if the variable which is declared but their values are not defined by us yet (those variables that are not initialized with some value by us), then they will store some garbage value inside them automatically. In the 3rd section our functions statements will get stored in maybe contiguous memory blocks one statement in each memory block. these three sections will maybe far from each other in memory addresses. 

// In section one where all of our program statements are stored, each statement in each memory block in maybe contiguous ram memory blocks, when our program will reach to a line where we are calling a function then normally cpu will go to the third section in memory where our function statements are stored and will execute those statements one by one but if the cpu will see that we're doing a simple work in our that function, like adding 2 numbers etc. then cpu will not go to the third section because this may become heavy for cpu, instead it will perform the statements of this simple function in the line in which this simple function is called(in maybe 1st section of memory). And in normal cases when a function is called the cpu will store the memory address of that statement in which we are calling this function, in the 1st section and the cpu will also go to the 3rd section and will go to the memory address of that function and then will go to the statements inside that function because in normal cases when the function will be called the cpu will go to 3rd section in our ram memory to access that function and after ending of that function it requires the address of the statement of 1st section in which function was called because cpu will have to execute the next statements which are stored in 1st section after the statement in which this function was called one by one after the completion of function execution so because the cpu already stored the address of that statment of 1st section in which function was called so the cpu will return to that address in 1st section after executing the function statements that will be stored in section 3 of ram memory and then the cpu will get back to that stored memory address of that statement in 1st section of our ram memory, in which we called the function and which memory address cpu stored before going to the 3rd section to execute the function statements, and then will execute the next statements of section 1 of our ram memory of that C++ program. 