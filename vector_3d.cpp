#include <string>
#include <iostream>
#include <math.h>
#include "vector_3d.h"

using namespace std;

int arr[3];

int* request_coord() {

    cout << "Считываем координаты второго вектора" << endl;

    cout << "Введите координату x: ";
    cin >> arr[0];
    cout << "Введите координату y: ";
    cin >> arr[1];
    cout << "Введите координату z: ";
    cin >> arr[2];

    return arr;
}

class vector_3d {
private:
    // скрытые переменные или функции
    int x;
    int y;
    int z;

public:

    ~vector_3d() {}

    // открытые переменные или функции 
    vector_3d(const int x, const int y, const int z) {}

    void sum() {
        cout << endl << "Это метод суммы" << endl;
        int* coords;
        coords = request_coord();
        cout << "Результат суммы: ";
        cout << x + coords[0] << ", " << y + coords[1] << ", " << z + coords[2] << endl;
    }

    void div() {
        cout << endl << "Это метод вычитания" << endl;
        int* coords;
        coords = request_coord();
        cout << "Результат вычитания: ";
        cout << x - coords[0] << ", " << y - coords[1] << ", " << z - coords[2] << endl;
    }

    void scalar_product() {
        cout << endl << "Это скалярное произведение" << endl;
        int* coords;
        coords = request_coord();
        cout << "Результат сколярного произведения: ";
        cout << x * coords[0] + y * coords[1] + z * coords[2] << endl;
    }

    void mult_scal() {
        cout << endl << "Это умножение на скаляр" << endl;
        int scal;
        int answer;
        cout << "Введите скаляр: ";
        cin >> scal;
        cout << "Модуль вектора равен: ";
        answer = sqrt(x*x + y*y + z*z);
        cout << answer;
        cout << endl <<" Результат умножения на скаляр это: ";
        cout << scal * answer << endl;
    }

    void compr_vector() {
        cout << endl << "Это метод сравнения векторов" << endl;
        int* coords;
        coords = request_coord();
        if (x == coords[0] and y == coords[1] and z == coords[2]) {
            cout << "Это равные вектора!" << endl; 
        } else {
            cout << "Они не равны!" << endl; 
        }
    }


    void length() {
        cout << endl << "Это метод поиска длинны вектора" << endl;
        cout << "Длинна вектора равна: " << sqrt(x*x + y*y + z*z) << endl;
    }

    void are_equal() {
        cout << endl << "Это метод сравнения длин двух векторов" << endl;
        int* coords;
        coords = request_coord();
        int answer = sqrt(x*x + y*y + z*z);;
        int answer2 = sqrt(coords[0]*coords[0] + coords[1]*coords[1] + coords[2]*coords[2]);;
        cout << "Модули первого и второго вектора равны: " << answer << ", " << answer2 << " соответсвенно."<< endl; 
        if (answer > answer2) {
            cout << "Первый вектор больше" << endl;
        } else if (answer == answer2) {
            cout << "Вектора равны" << endl;
        } else {
            cout << "Второй вектор больше" << endl;
        }
    }

};

