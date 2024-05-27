// # include <iostream>

// int main(){
//     auto result = (10 <=> 20) > 0; // "<=>" is called spaceship operator for testing compiler supports our given (in this case c++ 20) version or not.
//     std::cout << result << std::endl;
// }

// Output Formatting:

    // Examples:

        // abc a d
        // def b e
        // ghi c f

        // by doing output formatting to appear the code from line 12 to 14 in tabular format like in the example below:

            // abc       a          d
            // def       b          e
            // ghi       c          f

    // C++ Libraries We can Use For Output Formatting:

        // #include <ios> 
        // #include <iomanip>

            // Some Of Available tools in below 2 libraries: // only 5 of below formatters belong to <iostream> and <iomanip> which I mentioned with the formatters else all formatters below belongs to <ios>.

                // std::endl // newline character // we can also use "\n" with our variable when printing using std::cout to print a new line after that variable's value but std::endl and \n works differently under the hood maybe. // <iostream>

                // std::flush // causes immediate sending of data to the device connected to the stream. // all the data will first come in output buffer and then will get printed on terminal in one go after the buffer is full... // <iostream>

                // std::showpoint // Force showing the decimal point for floating point values... // std::noshowpoint for disabling this.

                // std::right // justification of the text to right.. // data is justified to the right by default...

                // std::boolalpha // for printing values in terminal as true or false instead of 1 and 0... // std::noboolalpha for disabling std::boolalpha....

                // std::setfill() // if for example we write std::setfill('-') so all the extra place will be filled by this sign that we provided in bracket inside ''. // <iomanip>

                // std::left // justification of the text to left..

                // std::internal // internal justification of the text like if we have -2, the - sign will be justified left cause we justified value right by using std::right so the main data like in this example 2 will be justified to right side...... // data is right justified and sign is left justified....

                // std::setw() // set width maybe... // <iomanip>

                // std::hex // for showing integers both positive negative value in hex base in terminal...

                // std::fixed // for printing values in fixed form from scientific form cause the default value shows in terminal in the fixed form but if value is long then by default it get shows in scientific form so for converting the scientific form value into fixed point value and print it in fixed point form in terminal... 

                // std::setprecision() // numbers after point including the number before point will also count.. // <iomanip>

                // std::dec // for showing integers both positive negative value in decimal base in terminal...

                // std::scientific // for printing values in scientific form like exponential I think cause the default value shows in terminal in the fixed form but if value is long then by default it get shows in scientific form too... // There is no official way to convert floating point output to defaults so the hack for doing this is std::cout.unsetf(std::ios::scientific | std::ios::fixed)

                // std::showbase // for showing base of our output like hexadecimal, decimal or oct etc.

                // std::uppercase // for uppercase... // std::nouppercase for disabling this..

                // std::showpos // to show positive sign for positive numbers... // std::noshowpos for disabling

                // std::oct // for showing integers both positive negative value in octal base in terminal...

                // cppreference.com/w/cpp/io/manip
                // cppreference.com/w/cpp/io/stream