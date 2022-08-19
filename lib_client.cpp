#include <iostream>
#include "leaver.h"
#include <Windows.h>    //Для ввода русских букв с консоли (SetConsoleCP(1251))


int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);             // установка кодовой страницы win-cp 1251 в поток ввода

    std::string UserName;
    std::cout << "Введите имя: ";
    std::cin >> UserName;
    Leaver::Leaver leaver;
    std::cout << leaver.leave(UserName) << std::endl;
}
