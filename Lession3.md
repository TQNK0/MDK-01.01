# 2.4 Векторы и строки

## Контейнер

Вектор - это динамический массив, обеспечивающий быстрое добавление новых элементов в конец и меняющий свой размер при необходимости.

**Подключение:** `#include <vector>`

**Создание:**

    std::vector<int> data = {1, 2, 3, 4, 5};
    std::vector<std::string> v1;           // пустой вектор
    std::vector<std::string> v2(5);        // 5 пустых строк
    std::vector<std::string> v3(5, "hello"); // 5 строк "hello"

## Обращение к элементам

**По индексу (без проверки):**

    std::vector<int> data = {1, 2, 3, 4, 5};
    int a = data[0];   // первый элемент
    int b = data[4];   // последний
    data[2] = -3;      // меняем элемент

**Безопасный доступ с проверкой:**

    data.at(0);        // вернёт 1
    data.at(42);       // выбросит исключение std::out_of_range

**Функции front и back:**

    data.front();      // первый элемент
    data.back();       // последний элемент

**Размер и проверка на пустоту:**

    data.size();       // количество элементов
    data.empty();      // true, если вектор пуст

## Итерация по индексам

    for (size_t i = 0; i != data.size(); ++i) {
        std::cout << data[i] << " ";
    }

**Важно:** size() возвращает беззнаковый тип size_t. Это создаёт проблему:

    // ОШИБКА для пустого вектора:
    for (size_t i = 0; i < data.size() - 1; ++i) { ... }

    // ПРАВИЛЬНО:
    for (size_t i = 0; i + 1 < data.size(); ++i) { ... }

    // ИЛИ (C++20):
    for (int64_t i = 0; i < std::ssize(data) - 1; ++i) { ... }

## Добавление и удаление элементов

    data.push_back(x);   // добавить в конец
    data.pop_back();     // удалить последний элемент
    data.clear();        // удалить все элементы

**Пример:**

    int x;
    std::vector<int> data;
    while (std::cin >> x) {
        data.push_back(x);
    }
    while (!data.empty() && data.back() == 0) {
        data.pop_back();
    }

## Резерв памяти

**Функции:**

    data.size();       // сколько элементов
    data.capacity();   // сколько памяти выделено

**reserve - зарезервировать память заранее:**

    data.reserve(100);   // выделить память на 100 элементов

**resize - изменить количество элементов:**

    data.resize(3);      // оставить 3 элемента (лишние удалить)
    data.resize(6);      // добавить элементы со значением по умолчанию

**Пример с capacity:**

    std::vector<int> data = {1, 2};
    std::cout << data.size() << " " << data.capacity();  // 2 2
    data.push_back(3);   // 3 4
    data.push_back(4);   // 4 4
    data.push_back(5);   // 5 8

## Многомерные векторы

    size_t m, n;
    std::cin >> m >> n;

    // матрица m x n, заполненная нулями
    std::vector<std::vector<int>> matrix(m, std::vector<int>(n));

    // ввод
    for (size_t i = 0; i != m; ++i) {
        for (size_t j = 0; j != n; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    // вывод
    for (size_t i = 0; i != m; ++i) {
        for (size_t j = 0; j != n; ++j) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << "\n";
    }

## Сортировка вектора

**Подключение:** `#include <algorithm>`

    std::vector<int> data = {3, 1, 4, 1, 5, 9, 2, 6};

    // по возрастанию
    std::sort(data.begin(), data.end());

    // по убыванию
    std::sort(data.rbegin(), data.rend());

    // C++20
    std::ranges::sort(data);

## Строки

Строка - это особый случай вектора символов (std::vector<char>) с дополнительными функциями.

**Подключение:** `#include <string>`

### Добавление

    std::string s = "Some string";
    s += ' ';          // добавить символ
    s += "functions";  // добавить строку

### Подстроки

    s.substr(5, 6);    // с позиции 5, 6 символов
    s.substr(12);      // с позиции 12 до конца

### Поиск

    size_t pos1 = s.find(' ');          // позиция первого пробела
    size_t pos2 = s.find(' ', pos1 + 1); // следующий пробел
    size_t pos3 = s.find("str");        // поиск подстроки
    size_t pos4 = s.find("#");          // вернёт std::string::npos

### Вставка, замена, удаление

    s.insert(5, "std::");               // вставка
    s.replace(0, 4, "Special");         // замена
    s.erase(8, 5);                      // удаление

### Проверка начала/конца (C++20)

    s.starts_with("hello");
    s.ends_with("bye");
