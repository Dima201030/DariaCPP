#include "func.h"

#include <iostream>

void printHello() {

    int countMarks, four = 0, five = 0;
    std::cout << "Введите countMarks: ";
    std::cin >> countMarks;

    for (int i = 0; i < countMarks; ++i) {
        int temp;
        std::cin >> temp;

        if (temp == 4) {
            ++four;
        } else if (temp == 5) {
            ++five;
        }
    }

    std::cout << "========================================" << std::endl;

    for (int i = 0, j = (five + four); i < j; ++i) {
        if (four) {
            std::cout << 4 << std::endl;
            --four;
        } else {
            std::cout << 5 << std::endl;
            --five;
        }
    }

}

void func() {
    // std::cout << "***********\n";
    // std::cout << "*         *\n";
    // std::cout << "*         *\n";
    // std::cout << "***********\n";

    // std::cout << "\n";

    // std::cout << "***********\n";
    // std::cout << "*         *\n";
    // std::cout << "*         *\n";
    // std::cout << "***********\n";

    // std::cout << "\n";

    // std::cout << "***********\n";
    // std::cout << "*         *\n";
    // std::cout << "*         *\n";
    // std::cout << "***********\n";

    /* Функция — это отдельный блок кода, который выполняет одну конкретную задачу.
     *
     * Сделать чай()
     *
     *
     * тип имя() {
     *    код
     * }
     *
     *
     * void -- ничего не выводим
     *
     *
     *
    */


    printHello();



}
