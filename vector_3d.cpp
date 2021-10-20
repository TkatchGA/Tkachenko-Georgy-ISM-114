#include <string>
#include <sstream>
#include <cmath>
#include <iostream>
#include "vector_3d.h"
#include "math_helper.h"

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
vector_3d vector_3d::sum(const vector_3d& other) const {

    const double sum_x = this->get_x() + other.get_x();
    const double sum_y = this->get_y() + other.get_y();
    const double sum_z = this->get_z() + other.get_z();

    return vector_3d(sum_x, sum_y, sum_z);
}


vector_3d vector_3d::sub(const vector_3d& other) const {
    const double sub_x = this->get_x() - other.get_x();
    const double sub_y = this->get_y() - other.get_y();
    const double sub_z = this->get_z() - other.get_z();

    return vector_3d(sub_x, sub_y, sub_z);
    
}
*/

vector_3d vector_3d::sum(const vector_3d& other) const {

    return  ::sum_helper(this->get_x(), other.get_x()) &&
            ::sum_helper(this->get_y(), other.get_y())&&
            ::sum_helper(this->get_z(), other.get_z());

}


vector_3d vector_3d::sub(const vector_3d& other) const {
    return  ::sub_helper(this->get_x(), other.get_x()) &&
            ::sub_helper(this->get_y(), other.get_y())&&
            ::sub_helper(this->get_z(), other.get_z());

}
/*
double vector_3d::scalar_product(const vector_3d& other) const {
    return this->get_x() * other.get_x() + this->get_y() * other.get_y() + this->get_z() * other.get_z();
};
*/

double vector_3d::scalar_product(const vector_3d& other) const {

    mult_x = ::mult_helper(this->get_x(), other.get_x());
    mult_y = ::mult_helper(this->get_y(), other.get_y());
    mult_z = ::mult_helper(this->get_z(), other.get_z());

    sum_xy = ::sum_helper(mult_x, mult_y);

    return ::sum_helper(sum_xy, mult_z);
};
/*
double vector_3d::mult_scal(const double scal) const {
    return sqrt(pow(this->get_x(), 2) + pow(this->get_y(), 2) + pow(this->get_z(), 2)) * scal;
};
*/

double vector_3d::mult_scal(const double scal) const {

    mult_x = ::mult_helper(this->get_x(), this->get_x());
    mult_y = ::mult_helper(this->get_y(), this->get_y());
    mult_z = ::mult_helper(this->get_z(), this->get_z());
    sum_xy = ::sum_helper(mult_x, mult_y);
    answer = ::mult_helper(sqrt(::sum_helper(sum_xy, mult_z)), scal);

    return answer;
};

bool vector_3d::compr_vector(const vector_3d& other) const {

    return ::are_equal(this->get_x(), other.get_x()) &&
           ::are_equal(this->get_y(), other.get_y()) &&
           ::are_equal(this->get_z(), other.get_z());
    
}
/*
double vector_3d::length() const {
    return sqrt(pow(this->get_x(), 2) + pow(this->get_y(), 2) + pow(this->get_z(), 2));
}
*/

double vector_3d::length() const {
    mult_x = ::mult_helper(this->get_x(), this->get_x());
    mult_y = ::mult_helper(this->get_y(), this->get_y());
    mult_z = ::mult_helper(this->get_z(), this->get_z());

    sum_xy = ::sum_helper(mult_x, mult_y);
    return ::sum_helper(sum_xy, mult_z);
}

bool vector_3d::are_equal(const vector_3d& other) const {
    return ::are_equal(this->length(), other.length());
    
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
