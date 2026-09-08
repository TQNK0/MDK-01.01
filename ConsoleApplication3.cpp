#include <iostream>
using namespace std;

int main()
{
    // 1
    cout << "ЗАДАНИЕ 1 ПЕЧАТЬ ТЕКСТА\n";
    cout << "C++ is a general-purpose programming language with a bias towards systems programming that  \n";
    cout << "- is a better C\n";
    cout << "- supports data abstraction\n";
    cout << "- supports object-oriented programming\n";
    cout << "- supports generic programming.\n";
    cout << "\nНажмите Enter...";
    cin.get();

    // 2
    cout << "\nЗАДАНИЕ 2 СУММА ЧИСЕЛ\n";
    long long a, b;
    cin >> a >> b;
    cout << a + b << "\n";
    cout << "\nНажмите Enter...";
    cin.get();
    cin.get();

    // 3
    cout << "\nЗАДАНИЕ 3 ДЮЙМЫ\n";
    double cm;
    cin >> cm;
    cout << cm / 2.54 << "\n";
    cout << "\nНажмите Enter...";
    cin.get();
    cin.get();

    // 4
    cout << "\nЗАДАНИЕ 4 СУММА ОТ 1 ДО N\n";
    long long n;
    cin >> n;
    cout << n * (n + 1) / 2 << "\n";

    return 0;
}