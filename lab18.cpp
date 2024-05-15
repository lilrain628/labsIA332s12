#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Определение класса "Места общественного питания"
class Restaurant {
public:
    string name;
    string type;
    int rating;
    string address;
};

int main() {
    int originalSize, newSize;

    // Ввод размерности исходного вектора с клавиатуры
    cout << "Введите размерность исходного вектора: ";
    cin >> originalSize;

    // Создание и заполнение исходного вектора
    vector<Restaurant> originalVector(originalSize);
    for (int i = 0; i < originalSize; i++) {
        cout << "Введите название учреждения: ";
        cin >> originalVector[i].name;
        cout << "Введите тип учреждения: ";
        cin >> originalVector[i].type;
        cout << "Введите рейтинг учреждения: ";
        cin >> originalVector[i].rating;
        cout << "Введите адрес: ";
        cin >> originalVector[i].address;
    }

    // Ввод размерности нового вектора с клавиатуры
    cout << "Введите размерность нового вектора: ";
    cin >> newSize;

    // Создание нового вектора и переписывание некоторых объектов из исходного вектора
    vector<Restaurant> newVector(newSize);
    for (int i = 0; i < newSize; i++) {
        newVector[i] = originalVector[i % originalSize]; // Просто повторяем объекты из исходного вектора
    }

    // Проверка, не оказался ли новый вектор пустым
    if (newSize == 0) {
        cout << "Новый вектор пустой." << endl;
    } else {
        // Сортировка объектов в новом векторе по рейтингу (пример)
        sort(newVector.begin(), newVector.end(), [](const Restaurant &a, const Restaurant &b) {
            return a.rating < b.rating;
        });

        // Вывод отсортированного нового вектора
        cout << "Отсортированный новый вектор:" << endl;
        for (const auto &restaurant : newVector) {
            cout << "название: " << restaurant.name <<endl << "Тип: " << restaurant.type << ", Рейтинг: " << restaurant.rating << ", Адрес: " << restaurant.address << endl;
        }
    }

    return 0;
}
