#include "Pascals.h"
#include <iostream>
int main() {
    std::cout << "start test\n";
    unsigned lines = 0;
    do {
        std::cout << "enter the number of lines (between 1 and 25)";
        std::cin >> lines;
    } while(lines>0 && lines <= 25);
    std::cout << Pascals<25>(lines);
    std::cin.get();
}