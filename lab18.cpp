#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class restaurant {
public:
    string name;
    string type;
    string adress;

public:
    restaurant(string namerestaurant, string typerestaurant, string adressrestaurnt) {
        name = namerestaurant;
        type = typerestaurant;
        adress = adressrestaurnt;
    }

    void outputTo() {
        cout << "название завдения: " << name << endl;
        cout << "Тип заведения: " << type << endl;
        cout << "Адресс заведения: " << adress << endl;
    }

    string get_name() const {
        return name;
    }

    string get_type() const {
        return type;
    }
    string get_adress() const {
        return adress;
    }

    void set_name(string f) {
        name = f;
    }

    // Оператор для сортировки по  номеру группы
    bool operator<(const restaurant& other) const {
     return type < other.type;
  }
};

int main() {
    // Создаем исходный вектор объектов ManagementOrganization
    vector<restaurant> restaurant_list;
    restaurant_list.push_back(restaurant("мельница", "бар", "Пушкина4"));
    restaurant_list.push_back(restaurant("русь", "столовая", "koltushkina5"));
    restaurant_list.push_back(restaurant("южане горожане ", "ресторан", "Ivanova6"));
    restaurant_list.push_back(restaurant("додо пицца", "ресторан", "Petrova7"));
    restaurant_list.push_back(restaurant("пивной причал", "бар", "Sidorov8"));
    restaurant_list.push_back(restaurant("вкусно и точка", "ресторан", "rybkin9"));
    restaurant_list.push_back(restaurant("в гостях у ярика", "ресторан", "Bblkovo10"));

    // Создаем новый вектор и переписываем в него объекты с типом заведения "ресторан"
    vector<restaurant> newRestaurant;
    for ( int i=0;i<(int)restaurant_list.size();i++) {
        if (restaurant_list[i].type== "ресторан") {
            newRestaurant.push_back(restaurant_list[i]);
        }
    }

    printf("\n");
    for (int i=0;i<(int)newRestaurant.size();i++) {
        newRestaurant[i].outputTo();
        printf("\n");
    }

    // Проверяем, не оказался ли новый вектор пустым
    if (newRestaurant.empty()) {
        cout << "Новый вектор пуст." << endl;
    } else {
        // Сортируем объекты в новом векторе по номеру группы
        sort(newRestaurant.begin(), newRestaurant.end());

        // Выводим отсортированные объекты
        cout << "Отсортированные объекты:" << endl;
         printf("\n");
        for (int i=0;i<(int)newRestaurant.size();i++) {
            newRestaurant[i].outputTo();
            printf("\n");
        }
    } 

    return 0;
}
