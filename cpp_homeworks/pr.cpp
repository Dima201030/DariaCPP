#include "pr.h"
#include <iostream>

void pr()
{
    /*
        Урок-практика: циклы
        Дата: 28.06.2026
        Формат: весь урок только практика.

        Главная цель:
        научиться не просто писать for / while, а выбирать цикл по тексту задачи.

        Перед каждой задачей ОБЯЗАТЕЛЬНО написать план:

        // Ввод:
        // Вывод:
        // Нужен ли цикл:
        // Сколько повторений известно заранее:
        // Какой цикл выбираю:
        // Почему:
        // Что меняется на каждом круге:
        // Где цикл заканчивается:

        Таблица выбора цикла:

        1. for
           Когда заранее понятно количество повторений.
           Примеры: от 1 до N, 3 попытки, 10 строк, таблица умножения.

        2. while
           Когда есть условие продолжения.
           Примеры: пока N > 0, пока balance > 0.

        3. while (true) + break
           Когда заранее неизвестно, когда закончить.
           Примеры: ввод до 0, ввод до правильного пароля, меню до q.

        4. continue
           Когда текущий круг цикла нужно пропустить.
           Примеры: пропустить четные, пропустить forbidden, не учитывать отрицательные.

        Правила:
        - Решать задачи по порядку внутри раунда.
        - Если задача не получается 4 минуты, проговорить план вслух.
        - Если все равно не получается, написать только план и перейти дальше.
        - После решения обязательно проверить на примере.
        - Не использовать массивы, строки, функции, классы.
        - Разрешено: int, char, bool, cin, cout, if/else, switch,
          for, while, break, continue, ++, --, +=, -=, %, сравнения.
    */

    /*
        РАУНД 1. Разогрев: понять границы цикла
        Время: 15 минут
        Цель: научиться видеть старт, условие и шаг.
    */

    /*
        ЗАДАЧА 1. Линия чисел

        Пользователь вводит N.
        Вывести числа от 1 до N.

        Пример:
        Ввод:
        5

        Вывод:
        1
        2
        3
        4
        5
    */

    // Ввод: 5
    // Вывод: 12345
    // Нужен ли цикл: Да
    // Сколько повторений известно заранее: от 1 до N
    // Какой цикл выбираю: for
    // Почему: есть конкретика
    // Что меняется на каждом круге:
    // Где цикл заканчивается:


    // int N;
    // std::cout << "Введите число: ";
    // std::cin >> N;

    // for (int i = 1; i <= N; ++i) {
    //     std::cout << i << std::endl;
    // }


    /*
        ЗАДАЧА 2. Обратная линия

        Пользователь вводит N.
        Вывести числа от N до 1.

        Пример:
        Ввод:
        5

        Вывод:
        5
        4
        3
        2
        1
    */

    // int N;
    // std::cout << "Ввести число: ";
    // std::cin >> N;

    // for ( int i = N; i >= 1; --i) {
    //     std::cout << i << std::endl;
    // }





    /*
        ЗАДАЧА 3. Коридор

        Пользователь вводит left и right.
        Вывести все числа от left до right.

        Если left > right, вывести "Ошибка".

        Пример:
        Ввод:
        4
        8

        Вывод:
        4
        5
        6
        7
        8
    */

    // int left, right;
    // std::cout << "Ввести left:";
    // std::cin >> left;

    // std::cout << "Ввести right:";
    // std::cin >> right;

    // if (left > right) {
    //     std::cout << "Ошибка" << std::endl;
    // } else {
    //     for (int i = left; i <= right; ++i) {

        //         std::cout << i << std::endl;
        //     }
        // }


    /*
        ЗАДАЧА 4. Лифт

        Пользователь вводит currentFloor и targetFloor.

        Если currentFloor < targetFloor, вывести этажи вверх.
        Если currentFloor > targetFloor, вывести этажи вниз.
        Если currentFloor == targetFloor, вывести "Уже на месте".

        Пример:
        Ввод:
        7
        3

        Вывод:
        7
        6
        5
        4
        3
    */

    // int currentFloor, targetFloor;
    // std::cout << "Введите currentFloor: ";
    // std::cin >> currentFloor;

    // std::cout << "Введите targetFloor: ";
    // std::cin >> targetFloor;

    // if (currentFloor < targetFloor) {
    //     for (int i = currentFloor; i <= targetFloor; ++i) {
    //         std::cout << i << std::endl;
    //     }
    // } else if (currentFloor > targetFloor)  {
    //     for (int i = currentFloor; i >= targetFloor; --i) {
    //         std::cout << i << std::endl;
    //     }
    // } else {
    //     std::cout << "Вы уже на месте" << std::endl;
    // }
    //

    /*
        ЗАДАЧА 5. Только каждый четвертый

        Пользователь вводит N.
        Вывести все числа от 1 до N, которые делятся на 4.

        Пример:
        Ввод:
        17

        Вывод:
        4
        8
        12
        16
    */

    // int N;
    // std::cout << "Ввести число: ";
    // std::cin >> N;

    // for (int i = 4; i <= N; ++i) {
    //     if (i % 4 == 0) {
    //         std::cout << i << std::endl;
    //     }
    // }


    /*
        РАУНД 2. Накопители: sum, count, product
        Время: 15 минут
        Цель: понять, что иногда вывод делается после цикла.
    */

    /*
        ЗАДАЧА 6. Сумма диапазона

        Пользователь вводит a и b.
        Считать, что a <= b.
        Найти сумму всех чисел от a до b.

        Пример:
        Ввод:
        2
        5

        Вывод:
        14
    */
    // int a, b, sum = 0;
    // std::cout << "Введите a: ";
    // std::cin >> a;

    // std::cout << "Введите b: ";
    // std::cin >> b;

    // for (int i = a; i <= b; ++i) {
    //     sum += i;
    // }
    // std::cout << sum << std::endl;


    /*
        ЗАДАЧА 7. Сумма чисел, которые делятся на 3

        Пользователь вводит N.
        Найти сумму всех чисел от 1 до N, которые делятся на 3.

        Пример:
        Ввод:
        10

        Вывод:
        18

        Пояснение:
        3 + 6 + 9 = 18
    */
    // int N;
    // std::cout << "Введите число: ";
    // std::cin >> N;

    // for (int i = 3; i <= N; ++i) {
    //     if (i % 3 == 0) {
    //         std::cout << i << std::endl;
    //     }
    // }


    /*
        ЗАДАЧА 8. Количество отрицательных

        Пользователь сначала вводит countNumbers - сколько чисел будет дальше.
        Потом вводит countNumbers чисел.
        Посчитать, сколько среди них отрицательных.

        Пример:
        Ввод:
        5
        -1
        10
        -7
        0
        3

        Вывод:
        2
    */

    // int countNumbers, countNegative = 0;
    // std::cout << "Введите countNumbers: ";
    // std::cin >> countNumbers;

    // for (int i = 0; i < countNumbers; ++i) {
    //     int temp;
    //     std::cin >> temp;
    //     if (temp <= 0) {
    //         ++countNegative;
    //     }
    // }
    // std::cout << countNegative << std::endl;

    /*
        ЗАДАЧА 9. Сумма без отрицательных

        Пользователь сначала вводит countNumbers.
        Потом вводит countNumbers чисел.
        Найти сумму только положительных чисел.
        Отрицательные числа и 0 пропускать.

        Пример:
        Ввод:
        6
        5
        -2
        0
        7
        -10
        3

        Вывод:
        15
    */
    // int countNumbers, sum = 0;
    // std::cout << "Введите countNumbers: ";
    // std::cin >> countNumbers;

    // for (int i = 0; i < countNumbers; ++i) {
    //     int temp;
    //     std::cin >> temp;
    //     if (temp >= 0) {
    //         sum += temp;
    //     }
    // }
    // std::cout << sum << std::endl;



    /*
        ЗАДАЧА 10. Произведение от 1 до N

        Пользователь вводит N.
        Найти произведение чисел от 1 до N.

        Пример:
        Ввод:
        4

        Вывод:
        24
    */
    // int n, product = 1;
    // std::cout << "Введите n: ";
    // std::cin >> n;

    // for (int i = 1; i <= n; ++i) {
    //     product *= i;

    // }
    // std::cout << product << std::endl;




    /*
        РАУНД 3. Неизвестное количество вводов
        Время: 15 минут
        Цель: выбрать while / while (true), когда заранее неизвестно количество повторений.
    */

    /*
        ЗАДАЧА 11. Ввод до нуля

        Пользователь вводит числа.
        Для каждого числа, кроме 0, вывести "OK".
        Если пользователь ввел 0, вывести "Stop" и закончить программу.

        Пример:
        Ввод:
        5
        -2
        9
        0

        Вывод:
        OK
        OK
        OK
        Stop
    */


    // int n;
    // std::cout << "Введите числа: ";
    // std::cin >> n;

    // while (true) {
    //     int temp;
    //     std::cin >> temp;
    //     if (temp == 0) {
    //         std::cout << "Stop" << std::endl;
    //         break;
    //     } else {
    //         std::cout << "Ok" << std::endl;
    //     }
    // }


    /*
        ЗАДАЧА 12. Сумма до нуля

        Пользователь вводит числа, пока не введет 0.
        Найти сумму всех чисел до 0.
        0 не добавлять.

        Пример:
        Ввод:
        4
        6
        -2
        0

        Вывод:
        8
    */

    // int sum = 0, a;
    // std::cout << "Введите числа: ";
    // std::cin >> a;

    // while (true) {
    //     int temp;
    //     std::cin >> temp;
    //     if (temp == 0) {
    //         break;
    //     }
    //     sum += temp;
    // }
    // std::cout << sum << std::endl;




    /*
        ЗАДАЧА 13. Первое число больше 100

        Пользователь вводит числа.
        Если число меньше или равно 100, вывести "Мало".
        Если число больше 100, вывести "Подходит" и завершить цикл.

        Пример:
        Ввод:
        50
        100
        101

        Вывод:
        Мало
        Мало
        Подходит
    */

    // int n;
    // std::cout << "Введите числа: ";
    // std::cin >> n;

    // while (true) {
    //     int temp;
    //     std::cin >> temp;
    //     if (temp <= 100) {
    //         std::cout << "Мало" << std::endl;
    //     } else if (temp > 100) {
    //         std::cout << "Подходит" << std::endl;
    //         break;
    //     }
    // }

    /*
        ЗАДАЧА 14. Угадай число

        В программе есть:
        int secret = 17;

        Пользователь вводит числа, пока не угадает secret.
        Если ввел меньше secret, вывести "Больше".
        Если ввел больше secret, вывести "Меньше".
        Если угадал, вывести "Угадала" и количество попыток.
Пример:
        Ввод:
        10
        20
        17

        Вывод:
        Больше
        Меньше
        Угадала
        3
    */

    // int secret = 17, attempt = 0;

    // while (true) {
    //     int temp;
    //     std::cin >> temp;
    //     ++attempt;

    //     if (temp < secret) {
    //         std::cout << "Больше" << std::endl;
    //     } else if (temp > secret) {
    //         std::cout << "Меньше" << std::endl;
    //     } else {
    //         std::cout << "Угадала" << "\n" << attempt << std::endl;
    //         break;

    //     }
    // }


    /*
        ЗАДАЧА 15. Пароль

        В программе есть:
        int password = 4321;

        Пользователь вводит пароль, пока не введет правильный.
        Если пароль неправильный, вывести "Неверно".
        Если пароль правильный, вывести "Вход" и завершить цикл.

        В этой задаче количество попыток НЕ ограничено.
    */

    // int password = 4321;
    // std::cout << "Введите пароль: ";

    // while (true) {
    //     int temp;
    //     std::cin >> temp;

    //     if (temp == password) {
    //         std::cout << "Вход" << std::endl;
    //         break;
    //     } else {
    //         std::cout << "Неверно" << std::endl;
    //     }
    // }

    /*
        РАУНД 4. break, continue, switch внутри цикла
        Время: 15 минут
        Цель: закрепить пропуск, досрочный выход и меню.
    */

    /*
        ЗАДАЧА 16. Запрещенное число

        Пользователь вводит N и forbidden.
        Вывести все числа от 1 до N, кроме forbidden.

        Пример:
        Ввод:
        7
        4

        Вывод:
        1
        2
        3
        5
        6
        7
    */
    // int n, forbidden;
    // std::cout << "Введите n: ";
    // std::cin >> n;
    // std::cout << "Введите forbidden: ";
    // std::cin >> forbidden;

    // for (int i = 1; i <= n; ++i) {
    //     if (i == forbidden) {
    //         continue;
    //     }
    //     std::cout << i << std::endl;
    // }



    /*
        ЗАДАЧА 17. Остановиться на числе

        Пользователь вводит N и stopNumber.
        Выводить числа от 1 до N.
        Если встретилось stopNumber, остановить цикл.
        Сам stopNumber НЕ выводить.

        Пример:
        Ввод:
        10
        6

        Вывод:
        1
        2
        3
        4
        5
        6
    */
    // int n, stopNumber;
    // std::cout << "Введите n: ";
    // std::cin >> n;
    // std::cout << "Введите stopnumber: ";
    // std::cin >> stopNumber;

    // for (int i = 1; i <= n; ++i) {
    //     if (i == stopNumber) {
    //         std::cout << i << std::endl;
    //         break;
    //     }
    //     std::cout << i << std::endl;
    // }


    /*
        ЗАДАЧА 18. Пропуск плохих оценок

        Пользователь сначала вводит countMarks.
        Потом вводит countMarks оценок.
        Нужно вывести только оценки 4 и 5.
        Остальные оценки пропускать через continue.

        Пример:
        Ввод:
        6
        5
        2
        4
        3
        5
        1

        Вывод:
        5
        4
        5
    */
    // int countMarks;
    // std::cout << "Введите countMarks: ";
    // std::cin >> countMarks;


    // for (int i = 0; i < countMarks; ++i) {
    //    int temp;
    //    std::cin >> temp;

    //    if (temp != 4 && temp != 5) {
    //         continue;
    //    }
    //    std::cout << temp << std::endl;
    // }

    // очень неуверена в этом задании

    // int countMarks, four = 0, five = 0;
    // std::cout << "Введите countMarks: ";
    // std::cin >> countMarks;


    // for (int i = 0; i < countMarks; ++i) {
    //     int temp;
    //     std::cin >> temp;

    //     if (temp == 4) {
    //         ++four;
    //     } else if (temp == 5) {
    //         ++five;
    //     }
    // }

    // std::cout << "========================================" << std::endl;

    // for (int i = 0, j = (five + four); i < j; ++i) {
    //     if (four) {
    //         std::cout << 4 << std::endl;
    //         --four;
    //     } else {
    //         std::cout << 5 << std::endl;
    //         --five;
    //     }
    // }

    /*
        ЗАДАЧА 19. Мини-меню

        Программа работает, пока пользователь не введет q.

        Пользователь вводит символ:
        h - вывести "Hello"
        b - вывести "Bye"
        n - вывести число 100
        q - вывести "Exit" и завершить программу
        другой символ - вывести "Unknown"

        Использовать switch.

        Важно:
        break внутри switch не завершает цикл.
    */

        // char op;

        // while (true) {
        //     std::cin >> op;

        //     switch (op) {
        //     case 'h':
        //         std::cout << "Hello" << std::endl;
        //         break;
        //     case 'b':
        //         std::cout << "Bye" << std::endl;
        //         break;
        //     case 'n':
        //         std::cout << 100 << std::endl;
        //         break;
        //     case 'q':
        //         std::cout << "Exit" << std::endl;
        //         break;
        //     default:
        //         std::cout << "Unknown" << std::endl;
        //         break;
        //     }
        // }


    /*
        ЗАДАЧА 20. Счетчик через меню

        В начале:
        int counter = 0;

        Программа работает, пока пользователь не введет q.

        Пользователь вводит символ:
        +  -> увеличить counter на 1
        -  -> уменьшить counter на 1
        p  -> вывести counter
        q  -> вывести "Exit" и завершить программу
        другой символ -> вывести "Unknown"
    */

    // int counter = 0;
    // char symbol;
    // bool isStared = true;
    // std::cout << "Введите символ: ";

    // while (isStared) {
    //     std::cin >> symbol;

    //     switch (symbol) {
    //     case '+':
    //         // for (int i = 0; i <= counter; ++i) {
    //         //     std::cout << i << std::endl;
    //         //     break;
    //         // }
    //         ++counter;
    //         break;
    //     case '-':
    //         // for (int k = 0; k >= counter; --k) {
    //         //     std::cout << k << std::endl;
    //         //     break;
    //         // }
    //         --counter;
    //         break;
    //     case 'p':
    //         std::cout << counter << std::endl;
    //         break;
    //     case 'q':
    //         std::cout << "Exit" << std::endl;
    //         isStared = false;
    //         break;
    //     default:
    //         std::cout << "Unknown" << std::endl;
    //         break;
    //     }

    // }
    /*
        ДОПОЛНИТЕЛЬНЫЕ ЗАДАЧИ
        Если основные 20 задач идут быстро, решать дальше.
    */
    // Классная работа 04.07
    /*
        ЗАДАЧА 21. Числа без кратных 3 и 5

        Пользователь вводит N.
        Вывести числа от 1 до N, которые НЕ делятся на 3 и НЕ делятся на 5.
    */

    // int n;
    // std::cin >> n;

    // for (int i = 0; i <= n; ++i) {
    //     if (i % 3 == 0 || i % 5 == 0) {
    //         continue;
    //     }
    //     std::cout << i << std::endl;
    // }

    /*
        ЗАДАЧА 22. Первые 7 четных чисел

        Вывести первые 7 четных чисел.

        Ожидаемый вывод:
        2
        4
        6
        8
        10
        12
        14
    */

    // int score = 0;
    // int temp = 2;

    // while (score < 7) {
    //     std::cout << temp << std::endl;
    //     temp += 2;
    //     ++score;
    // }
    /*
        ЗАДАЧА 23. Первые 5 чисел, которые делятся на 6

        Вывести первые 5 чисел, которые делятся на 6.

        Ожидаемый вывод:
        6
        12
        18
        24
        30
    */

    // int counter = 0;

    // for (int i = 0; counter != 5; ++i) {
    //     if (i % 6 == 0) {
    //         std::cout << i << std::endl;
    //         ++counter;
    //     }
    // }

    /*
        ЗАДАЧА 24. Сумма до отрицательного

        Пользователь вводит числа.
        Суммировать числа, пока пользователь не введет отрицательное число.
        Отрицательное число в сумму не добавлять.
    */

    // int sum = 0;

    // while (true) {
    //     int temp;
    //     std::cin >> temp;

    //     if (temp < 0) {
    //         break;
    //     } else {
    //         sum += temp;
    //     }

    // }

    // std::cout << sum << std::endl;


    /*
        ЗАДАЧА 26. Таблица умножения на N

        Пользователь вводит N.
        Вывести:

        N * 1 = ...
        N * 2 = ...
        ...
        N * 10 = ...
    */

    // int n;
    // std::cin >> n;

    // for (int i = 1; i <= 10; ++i) {
    //     std::cout << n << " * " << i << " = " << n * i << std::endl;
    // }

    /*
        ЗАДАЧА 27. Квадрат из звездочек

        Пользователь вводит N.
        Вывести квадрат N на N.

        Пример:
        Ввод:
        3

        Вывод:
        ***
        ***
        ***
    */

    // for (int i = 0; i < 3; ++i) {
    //     for (int j = 0; j < 3; ++j) {
    //         std::cout << "*";
    //     }
    //     std::cout << std::endl;
    // }


    /*
        ЗАДАЧА 28. Лестница из звездочек
Пользователь вводит N.
        Вывести:

        *
        **
        ***
        ****
        и так до N строк.
    */

    // int N;
    // std::cout << "Введите N: ";
    // std::cin >> N;

    // for (int i = 0; i <= N; ++i) {
    //     for (int a = 0; a < i; ++a) {
    //         std::cout << "*";
    //     }
    //     std::cout << std::endl;
    // }

    /*
        // ЗАДАЧА 29. Предскажи вывод

        // Сначала написать ответ в комментарии.
        Потом запустить и проверить.

        int x = 5;
        int y = 0;

        y = x++;
        std::cout << x << " " << y << std::endl;

        y = ++x;
         std::cout << x << " " << y << std::endl;
    */
    // x = 6; y = 5;
    // x = 7; y = 6;

    // int x = 5;
    // int y = 0;

    // y = x++;
    // std::cout << x << " " << y << std::endl;

    // y = ++x;
    // std::cout << x << " " << y << std::endl;

    /*
        ЗАДАЧА 30. Исправь ошибку

        Код должен вывести числа от 10 до 1.
        Сейчас в нем ошибка. Найти и исправить.

        for (int i = 10; i >= 1; ++i) {
            std::cout << i << std::endl;
        }
    */

    // for (int i = 10; i >= 1; --i) {
    //     std::cout << i << std::endl;
    //  }

    /*
    ЗАДАЧА 2. Линия чисел (с нуля)

    Пользователь вводит N.
    Вывести числа от 0 до N.

    Пример:
    Ввод:
    4

    Вывод:
    0
    1
    2
    3
    4
    */

    // int n;
    // std::cout << "Введите n: ";
    // std::cin >> n;

    // for (int i = 0; i <= n; ++i) {
    //     std::cout << i << std::endl;
    // }

    /*
    ЗАДАЧА 3. Линия чисел в обратном порядке

    Пользователь вводит N.
    Вывести числа от N до 1.

    Пример:
    Ввод:
    5

    Вывод:
    5
    4
    3
    2
    1
    */

    // int n;
    // std::cout << "Введите n: ";
    // std::cin >> n;

    // for (int i = n; i >= 1; --i) {
    //     std::cout << i << std::endl;
    // }



    // int i = 0, a;
    // std::cout << "Введите число: ";
    // std::cin >> a;

    // while (i <= a) {
    //     std::cout << i << std::endl;
    //     ++i;
    // }


    // int i;
    // std::cout << "Введите число: ";
    // std::cin >> i;

    // while (i >= 0) {
    //     std::cout << i << std::endl;
    //     --i;
    // }


    // int i = 0, a;
    // std::cout << "Введите число: ";
    // std::cin >> a;
    // do {
    //     std::cout << i << std::endl;
    //     ++i;
    // }
    // while (i <= a);


    // int i;
    // std::cout << "Введите число: ";
    // std::cin >> i;
    // do {
    //     std::cout << i << std::endl;
    //     --i;
    // }
    // while (i >= 0);


    // int a;
    // std::cout << "Введите число: ";
    // std::cin >> a;
    // for (int i = 0; i <= a; ++i) {
    //     std::cout << i << std::endl;
    // }


    // int a;
    // std::cout << "Введите число: ";
    // std::cin >> a;
    // for (int i = a; i >= 0; --i) {
    //     std::cout << i << std::endl;
    // }


    // int d = 0;
    // while (d <= 456) {
    //     std::cout << d << std::endl;
    //     ++d;
    // }


    // int n;
    // std::cout << "Введите число: ";
    // std::cin >> n;

    // for (int i = 0; i <= 78; ++i) {
    //     std::cout << i << std::endl;
    // }


    // int b;
    // std::cout << "Введите b: ";
    // std::cin >> b;
    // do {
    //     std::cout << b << std::endl;
    //     --b;
    // }
    // while (b >= 0);


    // int i;
    // std::cout << "Введите i: ";
    // std::cin >> i;
    // do {
    //     std::cout << i << std::endl;
    //     ++i;
    // }
    // while (i <= 34);


    // int i;
    // std::cout << "Введите i: ";
    // std::cin >> i;
    // while (i >= 0) {
    //     std::cout << i << std::endl;
    //     --i;
    // }


























    return;
}
