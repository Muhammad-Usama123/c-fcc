// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// One Definition Rule:

    // Definitions can't show up more than once in entire program, or Translation units...

        // One Definition Rule: Context...

            // *) Free standing variables...
            // *) Functions...
            // *) Classes...
            // *) Class member functions...
            // *) Class static member variables...

            // class Person { // classes are exception: a definition for a class can show up in multiple translation units, the reason is we need to create objects of those classes so each translation unit really needs to see the definition for the class...
                // public: 
                    // Person(const std::string& names_param, int age_param);

                    // void print_info() const{
                        // std::cout << "name: " << full_name << " , age: " << age << std::endl; 
                    // }
                // private:

                    // std::string full_name;
                    // int age;
            // };

            // *) Free standing variables...: One Definition Rule

                // Variable: Declaration and definition...

                    // double weight {}; // now we can't define this variable again in this file or in another file(will throw linker error if we decdlare same variable in another file of this same program...) of the same program, otherwise compiler will throw error...

                    // int main () {
                        // std::cout << weight << std::endl;
                        // return 0;
                    // }

            // *) Functions...: One Definition Rule

                // double add (double a, double b);

                // int main () {
                    // double result = add(10, 20);
                    // std::cout << "result: " << result << std::endl;
                    // return 0;
                // }

                // double add (double a, double b) {
                    //  return a + b;
                // }

            // *) Classes...: Exceptions are possible in classes in one definition rule... // we can define same class in another file, but not in the same file (same translation unit), example shown in video...

                // struct Point 
                // {
                    // double m_x{}; 
                    // double m_y{}; 
                // };

                // int main () {
                    // Point p1;
                    // std::cout << "p1.m_x: " << p1.m_x << "p1.m_y: " << p1.m_y << std::endl;
                    // return 0;
                // }

            // *) Class static member variables...: maybe need .h extension file for this and in that file, on top, maybe we'll have to write, #ifndef PERSON_H in 1st line and write #define PERSON_H (cause we made the .h extension file with the name of person.h maybe...) and then in next line or in any line after that we'll write #include<iostream> and then class with static member variables and then in the end of the file we'll write #endif and after this in another file (.cpp extension file) we'll write #include "person.h" (file name in which we defined our class with static variable...) and then we'll write Person::Person(const std::string& names_param, int age_param) and then in next line we'll initialize our static variables "int Person::person_count = 8;" without quotes and then after that in next lines we'll write ": full_name{names_param}, age{age_param}{ // in next line we'll write ++ person_count;}" excluding these double quotes and this is all I think and after building the program successfully, we can create Person objects and can really use them in our program and for this we'll write (#include "person.h") without these parenthesis on top after #include <iostream> line in main.cpp file and then, inside int main function, we'll write "Person p1("John Snow", 35)" without these wrapping quotes(passing parameter value in p1 parensthesis) and then for printing the values we'll use our print_info() function that we maybe defined in our class with static variables in person.h file maybe and for using this print info function we'll write in our main function p1.print_info(); and then this function will print the values that we'll pass in p1 parameters in line before this line, like we described the step before calling this p1.print_info(); function... // if we'll try to define a class with same name Person in main.cpp file, so maybe because we included that file by writing (#include "person.h") in our main.cpp file in which we defined our 1st class with the same name Person so because of including this file in main.cpp, main.cpp will maybe also become same translation unit, so it'll maybe not allow us to define any class with same name "Person" in our main.cpp file... // for more explanation watch the ending part of one definition rule video, specially when we'll do this last example below practically... 

                // class Person { // classes are exception: a definition for a class can show up in multiple translation units, the reason is we need to create objects of those classes so each translation unit really needs to see the definition for the class...
                // public: 
                    // Person(const std::string& names_param, int age_param); // constructor maybe...

                    // void print_info() const{
                        // std::cout << "name: " << full_name << " , age: " << age << std::endl; 
                    // } // function maybe...
                // private:

                    // std::string full_name; // member variables maybe...
                    // int age; // member variables maybe...

                // public:

                    // static variable declaration:

                        // static int person_count; // static variable...
            // };
            


            
            




