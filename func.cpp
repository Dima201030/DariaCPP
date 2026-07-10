#include "func.h"

#include <iostream>

int sum(int a, int b) {

    return a + b;

}

void printHello() {

    std::cout << "Hello!" << std::endl;

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
     * тип имя(параметры) {
     *    код
     * }
     *
     *
     * void -- ничего не выводим
     *
     *
     *
     *
     *
    */


    printHello();

    sum(16, 19);

    std::cout << sum(16, 19) << std::endl;

    int lk = sum(16, 19);

    std::cout << lk << std::endl;


}
