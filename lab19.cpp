#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct Apartment {
    int rooms;
    int floor;
    double area;
    string address;
};

void addApartment(vector<Apartment>& apartments) {
    Apartment newApartment;
    cout << "Введите количество комнат: ";
    cin >> newApartment.rooms;
    cout << "Введите этаж: ";
    cin >> newApartment.floor;
    cout << "Введите площадь: ";
    cin >> newApartment.area;
    cout << "Введите адрес: ";
    cin.ignore();
    getline(cin, newApartment.address);

    apartments.push_back(newApartment);
}

void exchangeApartment(vector<Apartment>& apartments) {
    int rooms, floor;
    cout << "Введите количество комнат для обмена: ";
    cin >> rooms;
    cout << "Введите этаж для обмена: ";
    cin >> floor;

    for (auto it = apartments.begin(); it != apartments.end(); ++it) {
        if (it->rooms == rooms && it->floor == floor) {
            cout << "Найден подходящий вариант для обмена: " << it->address << ", " << it->rooms << " комнат(ы), " << it->floor << " этаж, " << it->area << " кв.м." << endl;
            apartments.erase(it);
            return;
        }
    }

    cout << "Подходящий вариант для обмена не найден. Ваша заявка добавлена в очередь." << endl;
    Apartment newApartment;
    newApartment.rooms = rooms;
    newApartment.floor = floor;
    apartments.push_back(newApartment);
}

void printApartments(const vector<Apartment>& apartments) {
    for (const Apartment& apartment : apartments) {
        cout << apartment.address << ", " << apartment.rooms << " комнат(ы), " << apartment.floor << " этаж, " << apartment.area << " кв.м." << endl;
    }
}

int main() {
    vector<Apartment> apartments;
    string cont;
    // Начальное формирование картотеки
    //addApartment(apartments);
     do {
        addApartment(apartments);
        cout << "Хотите продолжить формирование картотеки? (да/нет): ";
        cin >> cont;
    } while (cont == "да");

    // Ввод заявки на обмен
    //exchangeApartment(apartments);
    cout << "Хотите проверить наличие кв для обмена? (да/нет): ";
    cin >> cont;
    if (cont == "да") {
        exchangeApartment(apartments);
    }
    // Вывод всего списка
    printApartments(apartments);

    return 0;
}
