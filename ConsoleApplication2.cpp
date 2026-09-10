#include <iostream>
#include <string>
using namespace std;

int main()
{
    //2: SOUNDEX 
    cout << "ЗАДАНИЕ 2 SOUNDEX\n";
    string w;
    cin >> w;

    for (int i = 0; i < w.size(); i++)
        if (w[i] >= 'A' && w[i] <= 'Z')
            w[i] = w[i] - 'A' + 'a';

    string res = "";
    res = res + w[0];

    for (int i = 1; i < w.size(); i++)
    {
        char c = w[i];
        char code = '0'; 

        if (c == 'b' || c == 'f' || c == 'p' || c == 'v') code = '1';
        else if (c == 'c' || c == 'g' || c == 'j' || c == 'k' || c == 'q' || c == 's' || c == 'x' || c == 'z') code = '2';
        else if (c == 'd' || c == 't') code = '3';
        else if (c == 'l') code = '4';
        else if (c == 'm' || c == 'n') code = '5';
        else if (c == 'r') code = '6';

        if (code != '0')
        {
            if (res.size() == 1 || res[res.size() - 1] != code)
                res = res + code;
        }
        else if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
        {
            if (res.size() > 1 && res[res.size() - 1] != '0')
                res = res + '0';
        }
    }

    string ans = "";
    for (int i = 0; i < res.size(); i++)
        if (res[i] != '0')
            ans = ans + res[i];

    while (ans.size() < 4)
        ans = ans + '0';

    if (ans.size() > 4)
    {
        string temp = "";
        for (int i = 0; i < 4; i++)
            temp = temp + ans[i];
        ans = temp;
    }

    cout << ans << "\n\n";

    //3: ОБРАТНАЯ ПЕРЕСТАНОВКА 
    cout << "ЗАДАНИЕ 3 ОБРАТНАЯ ПЕРЕСТАНОВКА\n";
    int n;
    cin >> n;

    int a[20001];
    int b[20001];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        b[a[i]] = i + 1;

    for (int i = 1; i <= n; i++)
        cout << b[i] << " ";
    cout << "\n\n";

    //4: СОРТИРОВКА
    cout << "ЗАДАНИЕ 4: СОРТИРОВКА\n";
    string lines[1000];
    int cnt = 0;
    string line;

    cin.ignore(10000, '\n');

    while (getline(cin, line) && line != ".")
    {
        lines[cnt] = line;
        cnt++;
    }

    for (int i = 0; i < cnt - 1; i++)
    {
        for (int j = 0; j < cnt - 1 - i; j++)
        {
            if (lines[j] > lines[j + 1])
            {
                string tmp = lines[j];
                lines[j] = lines[j + 1];
                lines[j + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < cnt; i++)
        cout << lines[i] << "\n";

    return 0;
}