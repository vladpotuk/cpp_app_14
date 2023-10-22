#include<windows.h>
#include <iostream>

int main() {
    system("chcp 1251");
    system("cls");
    double number;

    
    std::cout << "¬вед≥ть число: ";
    std::cin >> number;

    if (number > 0) {
        std::cout << "÷е число додатне." << std::endl;
    }
    else if (number < 0) {
        std::cout << "÷е число в≥д'Їмне." << std::endl;
    }
    else {
        std::cout << "÷е число дор≥внюЇ нулю." << std::endl;
    }

    return 0;
}


