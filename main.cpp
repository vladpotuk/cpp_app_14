#include<windows.h>
#include <iostream>

int main() {
    system("chcp 1251");
    system("cls");
    double number;

    
    std::cout << "������ �����: ";
    std::cin >> number;

    if (number > 0) {
        std::cout << "�� ����� �������." << std::endl;
    }
    else if (number < 0) {
        std::cout << "�� ����� ��'����." << std::endl;
    }
    else {
        std::cout << "�� ����� ������� ����." << std::endl;
    }

    return 0;
}


