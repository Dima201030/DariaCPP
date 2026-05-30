#include <iostream>
#include <cmath>

int main() {

    // типы данных -- int std::string float double char bool
    // чтобы вывести -- std::cout << (что-то) << std::endl;
    // std::endl -- это перенос на другую строку | "\n"
    // чтобы ввести -- std::cin >> (в что-то);

    // long long l = 12; // инициализация
    // std::cout << l << std::endl;    // вывод

    // l = 9120431;      // присвоение

    // std::cout << l << std::endl;    // вывод


    // // long long mn = 2147483650;
    // // std::cout << mn << std::endl;

    // // // ключевое слово const перед типом данных у переменной означает что она становится константной и её изменение не доступно

    // // const int i = 132;

    // // // i = 2313;
    // // // std::cout << i << std::endl;





    // // Арифметические операторы

    // int i = 45, p = 89, result = 0;


    // i + p; // Никуда не сохраняет, просто проводит математичскую операцию

    // result = i + p;
    // result = i * p;
    // result = i - p;
    // result = i / p;
    // result = i % p;
    // result = (i + (i - p));

    // std::cout << "================================" << std::endl;
    // std::cout << i << " " << p << std::endl;
    // std::cout << "================================" << std::endl;
    // std::cout << result << std::endl;

    // // Положить значение переменной o в переменную result
    // result = p;

    // std::cout << "================================" << std::endl;
    // std::cout << result << std::endl;

    // result = p;

    // result = p + 1;

    // result = result + p;
    // // result += p; - краткая форма

    // std::cout << "================================" << std::endl;
    // std::cout << result << std::endl;


    // int t = 80;
    // result = 0;

    // result = t / 3;

    // std::cout << "================================" << std::endl;
    // std::cout << result << std::endl;

    // float resultFloat;

    // resultFloat = t / 3.0;

    // std::cout << "================================" << std::endl;
    // std::cout << resultFloat << std::endl;

    // resultFloat = (double)t / 3; // 80.0 / 3

    // std::cout << "================================" << std::endl;
    // std::cout << resultFloat << std::endl;
    // std::cout << "================================" << std::endl;

    // // Декримент (префиксный и постфиксный) и Инкримент (префиксный и постфиксный)

    // int x = 5, y = 0;

    // // Префиксный инкремент

    // y = ++x; // x становится 6, затем y присваивается значение 6

    // std::cout << "x = " << x << " y = " << y << std::endl;

    // // ++x -- хорошая форма

    // // Постфиксный инкремент

    // x = 5;
    // y = 0;

    // y = x++; // y присваивается значение 5, затем x становится 6

    // std::cout << "x = " << x << " y = " << y << std::endl;

    // // Префиксный Декримент

    // y = --x; // x становится 4, затем y присваивается значение 4

    // std::cout << "x = " << x << " y = " << y << std::endl;

    // // ++x -- хорошая форма

    // // Постфиксный Декримент

    // x = 5;
    // y = 0;

    // y = x--; // y присваивается значение 5, затем x становится 4

    // std::cout << "x = " << x << " y = " << y << std::endl;


    // // Приоритет операторов

    // x = 56;
    // y = 45;
    // result = 0;

    // result = (x + y) - (++x * 2);

    // std::cout << "================================" << std::endl;
    // x = 56, y = 45;
    // result = (x + y) - (++x * 2);
    // std::cout << result << std::endl;
    // std::cout << "================================" << std::endl;

    // x = 2;
    // y = 56;

    // std::cout << pow(y, x) << std::endl; // Степень
    // std::cout << "================================" << std::endl;
    // std::cout << sqrt(9) << std::endl; // Корень
    // std::cout << "================================" << std::endl;
    // std::cout << abs(-78) << std::endl; // Модуль
    // std::cout << "================================" << std::endl;
    // std::cout << round((double)t / 3) << std::endl; // Округление


    // // Перменные с булевым типом данных
    // // bool -- тип данных который в себя принимает либо true (истина)(1) либо false (ложь)(0)

    // // bool op = false;
    // bool k = true;

    // std::cout << "================================" << std::endl;

    // std::cout << op << std::endl;

    // std::cout << "================================" << std::endl;

    // op = 43526;

    // std::cout << op << std::endl; // Выведет 1

    // std::cout << "================================" << std::endl;

    // // Операторы сравнения — возвращают bool
    // int l = 10, d = 10;

    // std::cout << (l == d) << "\n";   // 1 — не равны
    // std::cout << (l != d) << "\n";   // 1 — неравны
    // std::cout << (l > d) << "\n";   // 1 — l больше
    // std::cout << (l <= d) << "\n";   // 0 — l не меньше d


    // std::cout << "================================" << std::endl;

    // int score;

    // std::cout << "Введи оценку (0-100): ";

    // std::cin >> score;

    // // Базовый if/else
    // if (score >= 70) {
    //     std::cout << "Хорошо\n";
    // } else if (score >= 90) {
    //     std::cout << "Отлично!\n";
    // } else if (score >= 50) {
    //     std::cout << "Удовлетворительно\n";
    // } else {
    //     std::cout << "Неудовлетворительно" << std::endl;
    // }

    // // Важно: проверки идут СВЕРХУ ВНИЗ
    // // Как только одно условие true — остальные не проверяются
    // // Поэтому порядок if/else if имеет значение!

    // // int age = 17;
    // // bool hasId = true;
    // // bool hasMoney = false;

    // // if (age >= 18) {
    // //     std::cout << "Возраст подходит\n";

    // //     if (hasId == true) {
    // //         std::cout << "Документы в порядке\n";

    // //         if (hasMoney == true) {
    // //             std::cout << "Добро пожаловать!\n";
    // //         } else {
    // //             std::cout << "Недостаточно средств\n";
    // //         }

    // //     } else {
    // //         std::cout << "Нужен документ\n";
    // //     }

    // // } else {
    // //     std::cout << "Вам нет 18 лет\n";
    // // }

    // // int age = 20;
    // // bool hasTicket = true;

    // // // && (И) — оба условия должны быть true
    // // if (age >= 18 && hasTicket == true) {
    // //     std::cout << "Вход разрешён\n";
    // // }

    // // // || (ИЛИ) — хотя бы одно true
    // // bool isStudent = false;
    // // bool isPensioner = false;
    // // if (isStudent == true || isPensioner == true) {
    // //     std::cout << "Скидка 50%\n";
    // // } else {
    // //     std::cout << "Полная цена\n";
    // // }

    // // // ! (НЕ) — инвертирует значение
    // // bool doorLocked = true;
    // // if (!doorLocked == true) {
    // //     std::cout << "Дверь открыта\n";
    // // }
    // // !true = false, поэтому не выполнится


    // // if (age >= 18) {
    // //     std::cout << "Возраст подходит\n";

    // //     if (hasId) {
    // //         std::cout << "Документы в порядке\n";

    // //         if (hasMoney) {
    // //             std::cout << "Добро пожаловать!\n";
    // //         } else {
    // //             std::cout << "Недостаточно средств\n";
    // //         }
    // //     } else {
    // //         std::cout << "Нужен документ\n";
    // //     }
    // // } else {
    // //     std::cout << "Вам нет 18 лет\n";
    // // }


    // // Синтаксис: условие ? значение_если_true : значение_если_false

    // int a = 7, b = 3;

    // // Длинная форма:
    // int max1;

    // if (a > b) {
    //     max1 = a;
    // } else {
    //     max1 = b;
    // }

    // // Короткая форма (то же самое!):
    // int max2 = (a > b) ? a : b;

    // // Прямо в выводе:
    // int age = 20;

    // if (age >= 18) {
    //     std::cout << "совершеннолетний" << std::endl;
    // } else {
    //     std::cout << "несовершеннолетний" << std::endl;
    // }

    // std::cout << "Статус: " << (age >= 18 ? "совершеннолетний" : "несовершеннолетний") << "\n";

    // // Чётное/нечётное:



    // int n = 42;

    // if (n % 2 == 0) {
    //     std::cout << "Четное" << std::endl;
    // } else {
    //     std::cout << "Нечетное" << std::endl;
    // }


    // std::cout << (n % 2 == 0 ? "чётное" : "нечётное") << "\n";





    // // Switch / case / default / break

    // if (score >= 90) {
    //     std::cout << "Отлично\n";
    // } else if (score >= 70) {
    //     std::cout << "Хорошо!\n";
    // } else if (score >= 50) {
    //     std::cout << "Удовлетворительно\n";
    // } else if (score >= 45) {
    //     std::cout << "Неудовлетворительно" << std::endl;
    // } else if (score >= 30) {

    // } else {

    // }
    // std::cout << "================================" << std::endl;


    // switch (score) {
    // case 90:
    //     std::cout << "Отлично\n";
    //     break;
    // case 70:
    //     std::cout << "Хорошо!\n";
    //     break;
    // case 50:
    //     std::cout << "Удовлетворительно\n";
    //     break;
    // default:
    //     std::cout << "Не знаем оценку\n";
    // }

    // // Светофор. Ввести символ цвета ('r', 'y', 'g') через cin. Вывести что нужно делать водителю. Реализовать через switch. Обработать неизвестный цвет через default.

    // char symbol;

    // std::cout << "Введи в консоль: ";

    // std::cin >> symbol;

    // switch (symbol) {
    // case 'r':
    //     std::cout << "Стоит" << std::endl;
    //     break;
    // case 'y':
    //     std::cout << "Готовится" << std::endl;
    //     break;
    // case 'g':
    //     std::cout << "Едет" << std::endl;
    //     break;
    // default:
    //     std::cout << "Не расшифровали цвет" << std::endl;

    // }

    // // Чётное или нечётное. Ввести число. Вывести "чётное" или "нечётное". Сделать два варианта: через if/else и через тернарный оператор ? :. Убедиться что результат одинаковый.


    // int j = 2;

    // if (j % 2 == 0) {
    //     std::cout << "Четное" << std::endl;
    // } else {
    //     std::cout << "Нечетное" << std::endl;
    // }

    // std::cout << ((j % 2) == 0 ? "Четное" : "Нечетное");


    // Калькулятор. Ввести два числа и операцию (+, -, *, /). Реализовать вычисление через switch. Для деления проверить что делитель не ноль — вывести ошибку через вложенный if.


    int number1, number2;
    char op;

    std::cout << "Введите первое число: ";
    std::cin >> number1;

    std::cout << "Введите оператор: ";
    std::cin >> op;

    std::cout << "Введите второе число: ";
    std::cin >> number2;

    switch (op) {
    case '+':
        std::cout << number1 + number2 << std::endl;
        break;
    case '-':
        std::cout << number1 - number2 << std::endl;
        break;
    case '*':
        std::cout << number1 * number2 << std::endl;
        break;
    case '/':
        if (number2 == 0) {
            std::cout << "Ты долбаеб" << std::endl;
            break;
        }
        std::cout << number1 / number2 << std::endl;
        break;
    default:
        std::cout << "Такого оператора нет";
    }


    // Классификация возраста. Ввести возраст. Вывести категорию: ребёнок (0–12), подросток (13–17), молодёжь (18–35), взрослый (36–60), пенсионер (60+). Реализовать через if / else if / else.

    int age;

    std::cout << "Вывести возраст: ";
    std::cin >> age;

    if (age >= 0 && age <= 12) {
        std::cout << "ребенок" << std::endl;
    } else if (age >= 13 && age <= 17) {
        std::cout << "подросток" << std::endl;
    } else if (age >= 18 && age <= 35) {
        std::cout << "молоежь" << std::endl;
    } else if (age >= 36 && age <= 60) {
        std::cout << "взрослый" << std::endl;
    } else if (age >= 60) {
        std::cout << "пенсионер" << std::endl;
    } else {
        std::cout << "возраст не обозначен" << std::endl;

    }








    return 0;
}
