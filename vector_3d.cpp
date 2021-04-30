#include <string>
#include <sstream>
#include <cmath>
#include <iostream>
#include "vector_3d.h"

vector_3d::vector_3d(const double x, const double y, const double z) 
    : x(x), y(y), z(z) {}

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

vector_3d vector_3d::sum(const vector_3d& other) const {

    const double x = this->get_x() + other.get_x();
    const double y = this->get_y() + other.get_y();
    const double z = this->get_z() + other.get_z();

    return vector_3d(x, y, z);
}

vector_3d vector_3d::sum(const double x, const double y, const double z) const {

    const double x = this->get_x() + x;
    const double y = this->get_y() + y;
    const double z = this->get_z() + z;

    return vector_3d(x, y, z);
}

vector_3d vector_3d::sub(const vector_3d& other) const {
    const double x = this->get_x() - other.get_x();
    const double y = this->get_y() - other.get_y();
    const double z = this->get_z() - other.get_z();

    return vector_3d(x, y, z);
    
}

double vector_3d::scalar_product(const vector_3d& other) const {
    return this->get_x() * other.get_x() + this->get_y() * other.get_y() + this->get_z() * other.get_z();
};

double vector_3d::mult_scal(const double scal) const {
    return sqrt(pow(this->get_x(), 2) + pow(this->get_y(), 2) + pow(this->get_z(), 2)) * scal;
};

bool vector_3d::compr_vector(const vector_3d& other) const {

    return (this->get_x() == other.get_x() && this->get_y() == other.get_y() && this->get_z() == other.get_z());
}

double vector_3d::length() const {
    return sqrt(pow(this->get_x(), 2) + pow(this->get_y(), 2) + pow(this->get_z(), 2));
}

bool vector_3d::are_equal(const vector_3d& other) const {
    return this->length() == other.length();    
}

std::string vector_3d::to_string() const
{
    std::stringstream buffer;
    buffer << "{" << this->get_x() << ", ";
    buffer << this->get_y() << ", ";
    buffer << this->get_z() << "}";

    return buffer.str();
}

std::ostream& operator << (std::ostream& out, const vector_3d& vector)
{
    return out << vector.to_string();
}
