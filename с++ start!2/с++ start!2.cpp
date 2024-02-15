#include <iostream>

const int ROWS = 3;
const int COLS = 5;

int main() {
    setlocale(0, "RUS");
    double array[ROWS][COLS];
    double averages[ROWS] = { 0 };

    // Ввод элементов двумерного массива
    std::cout << "Введите элементы двумерного массива (3x5):\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cin >> array[i][j];
            averages[i] += array[i][j];
        }
        averages[i] /= COLS;
    }

    // Вывод средних арифметических элементов строк
    std::cout << "Средние арифметические элементов строк:\n";
    for (int i = 0; i < ROWS; ++i) {
        std::cout << "Строка " << i + 1 << ": " << averages[i] << std::endl;
    }

    return 0;
}