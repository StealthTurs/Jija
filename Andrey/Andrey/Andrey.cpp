﻿/*Вариант 30. 
Распечатать всех студентов, у которых за все время обучения не более 25% оценок 
а) 3  
Варианты а-д выбираются по желанию пользователя. 
Предусмотреть распечатывать лиц определенного пола.*/

#include "Header.h"
int _stateMenu;
void Menu() {
    cout << "Введите действие:" << endl
        << "(0) Выход из программы." << endl
        << "(1) Ввод данных" << endl
        << "(2) Вывод данных" << endl
        << "(3) Изменение данных" << endl
        << "(4) Удаление данных" << endl
        << "(5) Добавление данных" << endl
        << "(6) Сохранение данных" << endl
        << "(7) Разделить по полу" << endl
        << "(8) Показать отсартированный список" << endl
        << "(9) Поставить оценки" << endl
        << "(10) Вывести оценки" << endl
        << "(11) Проверка оценок" << endl
        << "(12) Подсчет 25% троек" << endl
        << "Ваш выбор >";
    cin >> _stateMenu;
}
void main() {
    setlocale(LC_ALL, "Russian");
    system("cls");
linc:
    DataInitialization();
    Menu();
    int _actions, gen;
    string fileName;
    while (_stateMenu != 0) {
        switch (_stateMenu) {
        case 1:
            system("cls");
            cout << "Ввод вручную(1) или из файла(2)?: ";
            cin >> _actions;
            system("cls");
            if (_actions == 1) {
                DataEntry();
            }
            else {
                cout << "Введите название файла: ";
                cin >> fileName;
                DataReading(fileName);

            }
            system("pause");
            system("cls");
            Menu();
            break;
        case 2:
            system("cls");
            Print();
            system("pause");
            system("cls");
            Menu();
            break;
        case 3:
            system("cls");
            DataChange();
            system("pause");
            system("cls");
            Menu();
            break;
        case 4:
            system("cls");
            DeleteData();
            system("pause");
            system("cls");
            Menu();
            break;
        case 5:
            system("cls");
            AddData();
            system("pause");
            system("cls");
            Menu();
            break;
        case 6:
            system("cls");
            cout << "Введите название файла: ";
            cin >> fileName;
            SaveData(fileName);
            system("pause");
            system("cls");
            Menu();
            break;
        case 7:
            system("cls");
            DivisionGender();
            system("pause");
            system("cls");
            Menu();
            break;
        case 8:
            system("cls");
            PrintDivision();
            system("pause");
            system("cls");
            Menu();
            break;
        case 9:
            system("cls");
            Marks();
            system("pause");
            system("cls");
            Menu();
            break;
        case 10:
            system("cls");
            PrintMarks();
            system("pause");
            system("cls");
            Menu();
            break;
        case 11:
            system("cls");
            Check1();
            system("pause");
            system("cls");
            Menu();
            break;
        case 12:
            system("cls");
            Podschet25proc3ek();
            system("pause");
            system("cls");
            Menu();
            break;
        default:
            cout << "Неправильно выбран пункт меню!" << endl;
            goto linc;
            break;

        }
    }
    system("cls");
    if (DataCleaning())
        cout << "Данные очищены! " << endl;
    else
        cout << "Данные НЕ отчищены! " << endl;
    cout << "Работа завершена." << endl;
    system("pause");
}
