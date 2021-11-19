#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    printf("Выберите операцию:\n");
    printf("1. Сложение\n");
    printf("2. Вычитание\n");
    printf("3. Умножение\n");
    printf("4. Деление\n");
    int n;
    cin >> n;
    int a, b;
    printf("Введите a: ");
    cin >> a;
    printf("Введите b: ");
    cin >> b;
    if (n == 1) {   
        int res = a + b;
        printf("Результат %d", res);
    }
    else if (n == 2) {   
        int res = a - b;
        printf("Результат %d", res);
    }
    else if (n == 3) {   
        int res = a * b;
        printf("Результат %d", res);
    }
    else {   
        int res = a / b;
        printf("Результат %d", res);
    }

}