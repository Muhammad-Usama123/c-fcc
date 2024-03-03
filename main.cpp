# include <iostream>

int main(){
    auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
    std::cout << result << std::endl;
}