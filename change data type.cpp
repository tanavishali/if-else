#include <iostream>
#include <string>

int main() {
    int number = 42;
    std::string strNumber = std::to_string(number);
    std::cout << "Integer to String: " << strNumber << std::endl;

    return 0;
}

