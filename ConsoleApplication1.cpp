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
    cout << "\nНажмите Enter...";
    cin.get();
    cin.get();

    // 5
    cout << "\nЗАДАНИЕ 5 ХОД ФЕРЗЯ\n";
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if (x1 == x2 || y1 == y2 || abs(x1 - x2) == abs(y1 - y2))
        cout << "YES\n";
    else
        cout << "NO\n";
    cout << "\nНажмите Enter...";
    cin.get();
    cin.get();

    // 6
    cout << "\nЗАДАНИЕ 6 ПРЯМОУГОЛЬНЫЙ ТРЕУГОЛЬНИК\n";
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    if (s1 + s2 <= s3 || s1 + s3 <= s2 || s2 + s3 <= s1)
        cout << "UNDEFINED\n";
    else if (s1 * s1 + s2 * s2 == s3 * s3 || s1 * s1 + s3 * s3 == s2 * s2 || s2 * s2 + s3 * s3 == s1 * s1)
        cout << "YES\n";
    else
        cout << "NO\n";
    cout << "\nНажмите Enter...";
    cin.get();
    cin.get();

    // 7
    cout << "\nЗАДАНИЕ 7 ВИСОКОСНЫЙ ГОД\n";
    int year;
    cin >> year;

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        cout << "YES\n";
    else
        cout << "NO\n";
    cout << "\nНажмите Enter...";
    cin.get();
    cin.get();

    // 8
    cout << "\nЗАДАНИЕ 8 КОЛИЧЕСТВО ДНЕЙ В МЕСЯЦЕ\n";
    int month, year2;
    cin >> month >> year2;

    int days;
    if (month == 2)
    {
        if ((year2 % 400 == 0) || (year2 % 4 == 0 && year2 % 100 != 0))
            days = 29;
        else
            days = 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        days = 30;
    else
        days = 31;

    cout << days << "\n";
    cout << "\nНажмите Enter...";
    cin.get();
    cin.get();

    // 9
    cout << "\nЗАДАНИЕ 9 СУММА ЦИФР\n";
    int number;
    cin >> number;

    int sum = 0;
    while (number > 0)
    {
        sum = sum + number % 10;
        number = number / 10;
    }
    cout << sum << "\n";

    return 0;
}