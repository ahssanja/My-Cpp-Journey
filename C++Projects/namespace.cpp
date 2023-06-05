#include <iostream>

namespace food {
    std::string pi = "pie!";
}

namespace count {
    int pi = 2;
}

int main() {

    double pi = 3.14159;
    std::cout << pi << std::endl;
    std::cout << food::pi << std::endl; // the 2 colons "::" means the scope resolution operator
    std::cout << count::pi << std::endl;

    return 0;
}