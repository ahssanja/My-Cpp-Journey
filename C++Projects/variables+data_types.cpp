#include <iostream>

int main() {

    // integer
    int count = 0;

    // decimal
    double gpa = 4.0;

    // character, otherwise known in C as a "small int"
    char grade = 'A';

    // string
    // *standard string*
    std::string random = "Random";

    std::cout << "The count is: " << count << std::endl;
    std::cout << "Your GPA is: " << gpa << std::endl;
    std::cout << "The grade equal to: " << grade << std::endl;
    std::cout << "This random string variable: " << random << std::endl;

    return 0;
}