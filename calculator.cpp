#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;
typedef long long int64;

int main() {
    setlocale(LC_ALL, "Russian"); //чтобы был русский текст, а не язык стола зачарования из minecraft
    int nType, nNumbers, opType, outpType, theme;
    char choose1, choose2;
    int64 aInt, bInt, cInt, resInt;
    double aFloat, bFloat, cFloat, resFloat; 
    do { //Выполняет один раз всю программу
        do { //Выполняет ввод вариантов один раз
            cout << "Какая тема?\n 1 - Тёмная\n 2 - Светлая\n 3 - Синяя\n 4 - Красная\n"; cin >> theme;
            if (theme == 1) system("color 07");      //тёмная тема
            else if (theme == 2) system("color 70"); //светлая тема
            else if (theme == 3) system("color 17"); //синяя тема
            else if (theme == 4) system("color 47"); //красная тема

            cout << "Какой тип числа?\n" << "1 - Целое число\n" << "2 - Дробное число\n" << endl;;
            cin >> nType; cout << endl; //ввод типа числа

            cout << "Сколько чисел будет? (Максимальное количество - 3; 1 - операция будет с этим же числом): ";
            cin >> nNumbers; cout << endl; //ввод количества чисел

            cout << "Тип операции?\n" << "1 - Сложение\n" << "2 - Вычитание\n" << "3 - Умножение\n"
                << "4 - Деление\n" << "5 - Возведение в степень (только если выбрано одно или два числа и оно целое)\n"
                << endl; cin >> opType; cout << endl; //ввод типа операции

            cout << "В какой системе счисления вывести?\n" << "1 - Десятичной\n" << "2 - Восьмеричной\n"
                << "3 - Шестнадцатеричной\n" << endl; cin >> outpType; cout << endl; //ввод в какой системе счисления выводить результат

            system("cls"); //очистка консоли чтобы не было лишнего мусора и выглядело красиво

            //выводит какие варианты были выбраны
            cout << "Выбраны следующие варианты:\n\n" << "Тема: ";
            switch (theme) {
            case 1:
                cout << "Тёмная\n";
                break;
            case 2:
                cout << "Светлая\n";
                break;
            case 3:
                cout << "Синяя\n";
                break;
            case 4:
                cout << "Красная\n";
                break;
            }

            cout << "Тип числа: ";
            switch (nType) {
            case 1:
                cout << "Целое\n";
                break;
            case 2:
                cout << "Дробное\n";
                break;
            default:
                cout << "Ошибка";
                return 0;
                break;
            }

            cout << "Количество чисел: ";
            switch (nNumbers) {
            case 1:
                cout << "1 (то есть операция будет выполнена с этим же самым числом)\n";
                break;
            case 2:
                cout << "2\n";
                break;
            case 3:
                cout << "3\n";
                break;
            default:
                cout << "Ошибка";
                return 0;
                break;
            }

            cout << "Тип операции: ";
            switch (opType) {
            case 1:
                cout << "Сложение\n";
                break;
            case 2:
                cout << "Вычитание\n";
                break;
            case 3:
                cout << "Умножение\n";
                break;
            case 4:
                cout << "Деление\n";
                break;
            case 5:
                cout << "Возведение в степень\n";
                break;
            default:
                cout << "Ошибка\n";
                return 0;
                break;
            }

            cout << "Система счисления: ";
            switch (outpType) {
            case 1:
                cout << "Десятичная\n";
                break;
            case 2:
                cout << "Восьмеричная\n";
                break;
            case 3:
                cout << "Шестнадцатеричная\n";
                break;
            default:
                cout << "Ошибка\n";
                return 0;
                break;
            }

            cout << "\nЭто верно? y/n: "; cin >> choose1;
            system("cls");
        } while (choose1 == 'n'); /* если y (то есть введённые данные верны), то программа продолжается,
        если n (нет), то ввод начинается заново */

        switch (nType) { //расчёты в зависимости от типа
        case 1: //если выбрано целое число
            switch (nNumbers) {
            case 1: //если число одно
                cout << "Введите число: "; cin >> aInt;
                switch (opType) {
                case 1: //если выбрано сложение
                    resInt = aInt + aInt;
                    break;
                case 2: //если выбрано вычитание
                    resInt = aInt - aInt;
                    break;
                case 3: //если выбрано умножение
                    resInt = aInt * aInt;
                    break;
                case 4: //если выбрано деление
                    resInt = aInt / aInt;
                    break;
                case 5: //если выбрано возведение в степень
                    resInt = pow(aInt, aInt);
                    break;
                }
                switch (outpType) { //вывод в выбранной системе счисления
                case 1: //в десятичной
                    cout << "Результат: " << resInt;
                    break;
                case 2: //в восьмеричной
                    cout << "Результат: " << oct << resInt;
                    break;
                case 3: //в шестнадцатеричной
                    cout << "Результат: " << hex << resInt;
                    break;
                }
                break;
            case 2: //если числа два
                cout << "Введите числа: "; cin >> aInt >> bInt;
                switch (opType) {
                case 1: //если выбрано сложение
                    resInt = aInt + bInt;
                    break;
                case 2: //если выбрано вычитание
                    resInt = aInt - bInt;
                    break;
                case 3: //если выбрано умножение
                    resInt = aInt * bInt;
                    break;
                case 4: //если выбрано деление
                    resInt = aInt / bInt;
                    break;
                case 5: //если выбрано возведение в степень
                    resInt = pow(aInt, bInt);
                    break;
                }
                switch (outpType) { //вывод в выбранной системе счисления
                case 1: //в десятичной
                    cout << "Результат: " << resInt;
                    break;
                case 2: //в восьмеричной
                    cout << "Результат: " << oct << resInt;
                    break;
                case 3: //в шестнадцатеричной
                    cout << "Результат: " << hex << resInt;
                    break;
                }
                break;
            case 3: //если числа три
                cout << "Введите числа: "; cin >> aInt >> bInt >> cInt;
                switch (opType) {
                case 1: //если выбрано сложение
                    resInt = aInt + bInt + cInt;
                    break;
                case 2: //если выбрано вычитание
                    resInt = aInt - bInt - cInt;
                    break;
                case 3: //если выбрано умножение
                    resInt = aInt * bInt * cInt;
                    break;
                case 4: //если выбрано деление
                    resInt = aInt / bInt / cInt;
                    break;
                }
                switch (outpType) { //вывод в выбранной системе счисления
                case 1: //в десятичной
                    cout << "Результат: " << resInt;
                    break;
                case 2: //в восьмеричной
                    cout << "Результат: " << oct << resInt;
                    break;
                case 3: //в шестнадцатеричной
                    cout << "Результат: " << hex << resInt;
                    break;
                }
                break;
            }
            break;
        case 2: //если выбрано дробное число
            switch (nNumbers) {
            case 1: //если выбрано одно число
                cout << "Введите число: "; cin >> aFloat;
                switch (opType) {
                case 1: //если выбрано сложение
                    resFloat = aFloat + aFloat;
                    break;
                case 2: //если выбрано вычитание
                    resFloat = aFloat - aFloat;
                    break;
                case 3: //если выбрано умножение
                    resFloat = aFloat * aFloat;
                    break;
                case 4: //если выбрано деление
                    resFloat = aFloat / aFloat;
                    break;
                default: //если выбрано возведение в степень или что-то другое
                    cout << "Ошибка!";
                    return 0;
                    break;
                }
                switch (outpType) { //вывод в выбранной системе счисления
                case 1: //в десятичной
                    cout << "Результат: " << resFloat;
                    break;
                case 2: //в восьмеричной (результат округляется)
                    cout << "Результат: " << oct << round(resFloat);
                    break;
                case 3: //в шестнадцатеричной (результат округляется)
                    cout << "Результат: " << hex << round(resFloat);
                    break;
                }
                break;
            case 2: //если два числа
                cout << "Введите числа: "; cin >> aFloat >> bFloat;
                switch (opType) {
                case 1: //если выбрано сложение
                    resFloat = aFloat + bFloat;
                    break;
                case 2: //если выбрано вычитание
                    resFloat = aFloat - bFloat;
                    break;
                case 3: //если выбрано умножение
                    resFloat = aFloat * bFloat;
                    break;
                case 4: //если выбрано деление
                    resFloat = aFloat / bFloat;
                    break;
                default: //если выбрано возведение в степень или что-то другое
                    cout << "Ошибка!";
                    return 0;
                    break;
                }
                switch (outpType) { //вывод в выбранной системе счисления
                case 1: //в десятичной
                    cout << "Результат: " << resFloat;
                    break;
                case 2: //в восьмеричной (результат округляется)
                    cout << "Результат: " << oct << round(resFloat);
                    break;
                case 3: //в шестнадцатеричной (результат округляется)
                    cout << "Результат: " << hex << round(resFloat);
                    break;
                }
                break;
            case 3: //если три числа
                cout << "Введите числа: "; cin >> aFloat >> bFloat >> cFloat;
                switch (opType) {
                case 1: //если выбрано сложение
                    resFloat = aFloat + bFloat + cFloat;
                    break;
                case 2: //если выбрано вычитание
                    resFloat = aFloat - bFloat - cFloat;
                    break;
                case 3: //если выбрано умножение
                    resFloat = aFloat * bFloat * cFloat;
                    break;
                case 4: //если выбрано деление
                    resFloat = aFloat / bFloat / cFloat;
                    break;
                }
                switch (outpType) { //вывод в выбранной системе счисления
                case 1: //в десятичной
                    cout << "Результат: " << resFloat;
                    break;
                case 2: //в восьмеричной (результат округляется)
                    cout << "Результат: " << oct << round(resFloat);
                    break;
                case 3: //в шестнадцатеричной (результат округляется)
                    cout << "Результат: " << hex << round(resFloat);
                    break;
                }
                break;
            }
            break;
        }
        cout << endl << "Выйти? y/n: "; cin >> choose2; //если y, программа заканчивается, если n, то программа начинается заново
        system("cls");
    }
    while (choose2 == 'n');
}