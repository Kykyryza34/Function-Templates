#include <iostream>
using namespace std;

template<class T>
void Max(T** x, int len) {

    for (int i = 0; i < len; i++) {

        T max = x[i][0];
        for (int j = 1; j < len; j++) {
            if (max < x[i][j])
                max = x[i][j];

        }
        cout << "Максимальное количество строк в строке " << i + 1 << ": " << max << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout << "   [Число] \n";
    cout << "количество строк: ";
    cin >> a;
    cout << "количество столбцов: ";
    cin >> b;
    int** intMas = new int* [a];
    cout << "Введите значения массива :\n";
    for (int i = 0; i < a; i++)
    {
        intMas[i] = new int[b];
        for (int j = 0; j < b; j++) {
            cin >> intMas[i][j];
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << intMas[i][j] << " ";
        }
        cout << endl;
    }
    Max<int>(intMas, a);


    cout << "   [Символ]\n";
    cout << "Количество строк: ";
    cin >> a;
    cout << "Количество столбцов: ";
    cin >> b;
    char** chMas = new char* [a];
    cout << "Введите значения массива:\n";
    for (int i = 0; i < a; i++) {
        chMas[i] = new char[b];
        for (int j = 0; j < b; j++) {
            cin >> chMas[i][j];
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << chMas[i][j] << " ";
        }
        cout << endl;
    }
    Max<char>(chMas, a);


    cout << "   [Слова]\n";
    cout << "Количество строк: ";
    cin >> a;
    cout << "Количество столбцов: ";
    cin >> b;
    string** stMas = new string * [a];
    cout << "Введите значения массива:\n";
    for (int i = 0; i < a; i++) {
        stMas[i] = new string[b];
        for (int j = 0; j < b; j++) {
            cin >> stMas[i][j];
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << stMas[i][j] << " ";
        }
        cout << endl;
    }
    Max<string>(stMas, a);
    cin.get();
}