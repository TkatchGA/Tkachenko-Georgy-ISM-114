#include <iostream>
#include <math.h>
using namespace std;

int arr[3];

int* requestCoord() {

    cout << "Считываем координаты второго вектора" << endl;

    cout << "Введите координату x: ";
    cin >> arr[0];
    cout << "Введите координату y: ";
    cin >> arr[1];
    cout << "Введите координату z: ";
    cin >> arr[2];

    return arr;
}

class Vector3D {
private:
    // скрытые переменные или функции
    int x;
    int y;
    int z;

public:
    // открытые переменные или функции 
    Vector3D() {
        cout << "Введите координату вектора x: ";
        cin >> x;
        cout << "Введите координату вектора y: ";
        cin >> y;
        cout << "Введите координату вектора z: ";
        cin >> z;
    }

    void sum() {
        cout << endl << "Это метод суммы" << endl;
        int* coords;
        coords = requestCoord();
        cout << "Результат суммы: ";
        cout << x + coords[0] << ", " << y + coords[1] << ", " << z + coords[2] << endl;
    }

    void subtr() {
        cout << endl << "Это метод вычитания" << endl;
        int* coords;
        coords = requestCoord();
        cout << "Результат вычитания: ";
        cout << x - coords[0] << ", " << y - coords[1] << ", " << z - coords[2] << endl;
    }

    void scalarProduct() {
        cout << endl << "Это скалярное произведение" << endl;
        int* coords;
        coords = requestCoord();
        cout << "Результат сколярного произведения: ";
        cout << x * coords[0] + y * coords[1] + z * coords[2] << endl;
    }

    void multScal() {
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

    void comprVector() {
        cout << endl << "Это метод сравнения векторов" << endl;
        int* coords;
        coords = requestCoord();
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

    void comprVectorLength() {
        cout << endl << "Это метод сравнения длин двух векторов" << endl;
        int* coords;
        coords = requestCoord();
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

int main() {

    Vector3D vectorTest;
    vectorTest.sum();
    vectorTest.subtr();
    vectorTest.scalarProduct();
    vectorTest.multScal();
    vectorTest.comprVector();
    vectorTest.length();
    vectorTest.comprVectorLength();

    return 0;
}