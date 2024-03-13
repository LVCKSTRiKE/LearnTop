#include <iostream>
#include <Windows.h>
using namespace std;

// Функция для сложения
template <typename T>
T Plus(T a, T b) {
    return a + b;
}

// Функция для вычитания
template <typename T>
T Minus(T a, T b) {
    return a - b;
}

// Функция для умножения
template <typename T>
T Multiply(T a, T b) {
    return a * b;
}

// Функция для деления
template <typename T>
T Division(T a, T b) {
    if (b == 0) {
        std::cerr << "Ошибка: деление на ноль\n";
        return 0;
    }
    return a / b;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleCP(1251);
    
    float a = 0;
    float b = 0;
    char oper;
    while (true) {
        cout << "Enter first and second nums: " << endl;
        cin >> a;
        cin >> b;
        cout << "Enter operation (+ | - | * | /): " << endl;
        cin >> oper;
        switch (oper) {
        case '+':
            cout << "Result is: " << Plus(a, b) << endl;
            break;
        case '-':
            cout << "Result is: " << Minus(a, b) << endl;
            break;
        case '*':
            cout << "Result is: " << Multiply(a, b) << endl;
            break;
        case '/':
            cout << "Result is: " << Division(a, b) << endl;
            break;
        }
    }
    return 0;
}