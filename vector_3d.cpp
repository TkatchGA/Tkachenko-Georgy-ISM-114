#include <string>
#include <sstream>
#include <cmath>
#include "vector_3d.h"

vector_3d::vector_3d(const double x, const double y, const double z) 
    : x(x), y(y), z(z) {}

vector_3d::vector_3d(const vector_3d& other) 
    : vector_3d(other.x, other.y, other.z) {}

double vector_3d::get_x() const {
    return this->x;
}

double vector_3d::get_y() const {
    return this->y;
}

double vector_3d::get_z() const {
    return this->z;
}
/*

Данное решение не подходит для решение задачи, тк вектор находиться в пространстве, а в
координатном представлении вектор суммы получается суммированием соответствующих координат слагаемых.
С другими методами аналогично.

double sum(const int x1, const int y1, const int z1) const {

    double a = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
    double b = sqrt(pow(x1, 2) + pow(y1, 2) + pow(z1, 2));
    double cos_ab = ((x*x1+y*y1+z*z1)/(sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2))*sqrt(pow(x1, 2) + pow(y1, 2) + pow(z1, 2))));
    return sqrt(fabs(pow(fabs(a), 2) + pow(fabs(b), 2) + 2 * fabs(a) * fabs(b) * cos_ab));
}

double div(const int x1, const int y1, const int z1) const {

    double a = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
    double b = sqrt(pow(x1, 2) + pow(y1, 2) + pow(z1, 2));
    double cos_ab = ((x*x1+y*y1+z*z1)/(sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2))*sqrt(pow(x1, 2) + pow(y1, 2) + pow(z1, 2))));
    return sqrt(fabs(pow(fabs(a), 2) + pow(fabs(b), 2) - 2 * fabs(a) * fabs(b) * cos_ab));
}
*/

vector_3d& vector_3d::sum(const vector_3d& other) const {

    const auto x = this->get_x() + other.get_x();
    const auto y = this->get_y() + other.get_y();
    const auto z = this->get_z() + other.get_z();
    const auto result = new vector_3d(x, y, z);
    return *result;
}

vector_3d& vector_3d::div(const vector_3d& other) const {
    const auto x = this->get_x() + other.get_x();
    const auto y = this->get_y() + other.get_y();
    const auto z = this->get_z() + other.get_z();
    const auto result = new vector_3d(x, y, z);
    return *result;
}

double scalar_product(const vector_3d& other) const {
    const auto result = this->get_x() * other.get_x() + this->get_y() * other.get_y() + this->get_z() * other.get_z();
    return *result;
};

double mult_scal(const int scal) const {
    const auto result = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2)) * scal;
    return *result;
};

std::string compr_vector(const double x, const double y, const double z) const {
    if (x == x1 and y == y1 and z == z1) {
        return yes
    } else {
        return no
    }
}

double length() const {
    const auto result = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
    return *result;
}

std::string are_equal(const double x, const double y, const double z) const {
    if (sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2)) == sqrt(pow(x1, 2) + pow(y1, 2) + pow(z1, 2))) {
        return yes
    } else {
        return no
    }
}