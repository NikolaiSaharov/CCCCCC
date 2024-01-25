#include <iostream>
#include <cmath>

using namespace std;

long long factorial(int n) {
    if (n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

int main() {
    int choice;
    double num1, num2;

    do {
        cout << "\n1. Сложение\n";
        cout << "2.Вычетание \n";
        cout << "3. Умножение\n";
        cout << "4. Деление\n";
        cout << "5. Возвести в степень\n";
        cout << "6. Найти квадратный корень числа\n";
        cout << "7. Найти 1% от числа\n";
        cout << "8. Факториал числа\n";
        cout << "9. Выход\n";
        cout << "Введите свой выбор: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Введите 2 числа: ";
                cin >> num1 >> num2;
                cout << "Результат: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Введите 2 числа: ";
                cin >> num1 >> num2;
                cout << "Результат: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Введите 2 числа:";
                cin >> num1 >> num2;
                cout << "Результат: " << num1 * num2 << endl;
                break;
            case 4:
                cout << "Введите 2 числа: ";
                cin >> num1 >> num2;
                if (num2 != 0)
                    cout << "Результат: " << num1 / num2 << endl;
                else
                    cout << "Error!" << endl;
                break;
            case 5:
                cout << "Введите сначала число, потом степень: ";
                cin >> num1 >> num2;
                cout << "Результат: " << pow(num1, num2) << endl;
                break;
            case 6:
                cout << "Введите число: ";
                cin >> num1;
                if (num1 >= 0)
                    cout << "Результат: " << sqrt(num1) << endl;
                else
                    cout << "Error!" << endl;
                break;
            case 7:
                cout << "Введите число: ";
                cin >> num1;
                cout << "Результат: " << num1 / 100 << endl;
                break;
            case 8:
                cout << "Введите число: ";
                cin >> num1;
                if (num1 >= 0)
                    cout << "Результат: " << factorial(num1) << endl;
                else
                    cout << "Error!" << endl;
                break;
            case 9:
                cout << "Спасибо, до свидания!..." << endl;
                break;
            default:
                cout << "Неверный выбор.Попробуйте снова." << endl;
        }
    } while (choice != 9);

    return 0;
}