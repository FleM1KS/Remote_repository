#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    printf("Нахождение максимального и минимального значения в массиве\n");
    int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    
    int max = 0;
    int min = 10;
    printf("Массив a[] = ");
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
        if (max < a[i]) max = a[i];
        if (min > a[i]) min = a[i];
    }
    cout << "\n";
    cout << "Максимальное значение: " << max << endl;
    cout << "Минимальное значение: " << min << endl;
}