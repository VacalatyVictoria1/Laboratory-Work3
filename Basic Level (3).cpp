#include <iostream>
#include <string>

using namespace std;

// Введите массив символов из 12 елементов.
// Замените каждый символ-цифру на символ "!".
int main()
{
    cout << "Basic level!" << endl;
    char sumbol[12];
    cout << "Enter 12 sumbols: " << endl;
    for (int i = 0; i < 12; i++)
    {
        cin >> sumbol[i];
    }
    for (int i = 0; i < 12; i++)
    {
        if (isdigit(sumbol[i]))
            sumbol[i] = '!';
        cout << sumbol[i];
    }
    cout << endl;
    system("pause");
}