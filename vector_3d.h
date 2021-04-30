#pragma once
#include <string>
#include <iostream>

/**
 * @brief Класс позволяющий работать с векторами
 */

class vector_3d {

private:

    /**
     * @brief координата вектора по x
     */
    double x;

    /**
     * @brief координата вектора по y
     */
    double y;
    
    /**
     * @brief координата вектора по z
     */
    double z;

public:

    /**
     * @brief Параметризированный конструктор
     * @param x Координата вектора по x
     * @param y Координата вектора по y
     * @param z Координата вектора по z
     */
    explicit vector_3d(const double x, const double y, const double z);
    
    /**
     * @brief Конструктор копирования
     */

    /* конструтор перемещения */

    vector_3d(const vector_3d& other) = default;

    /**
     * @brief конструтор перемещения 
     * 
     * @param other 
     */
    vector_3d(vector_3d&& other) = default;

    /**
     * @brief Деструктор
     */
    ~vector_3d() = default;

    /**
     * @brief Возвращает координату x
     * @return координата x
     */

    double get_x() const;

    /**
     * @brief Возвращает координату y
     * @return координата y
     */

    double get_y() const;

    /**
     * @brief Возвращает координату z
     * @return координата z
     */

    double get_z() const;

    /**
     * @brief Возвращает сумму векторов a и b
     * @return сумма векторов a и b
     */

    vector_3d sum(const vector_3d& other) const;

    vector_3d sum(const double x, const double y, const double z) const;

    /**
     * @brief Возвращает разность векторов a и b
     * @return разность векторов a и b
     */

    vector_3d sub(const vector_3d& other) const;

    /**
     * @brief Возвращает скалярное произведение векторов a и b
     * @return скалярное произведение векторов a и b
     */

    double scalar_product(const vector_3d& other) const;

    /**
     * @brief Возвращает умножение на скаляр вектора a
     * @return умножение на скаляр вектора a
     */

    double mult_scal(const double scal) const;

    /**
     * @brief Сравнивает равны ли вектор a, вектора b
     * @return yes или no
     */

    bool compr_vector(const vector_3d& other) const;

    /**
     * @brief Считает длину вектора a
     * @return длина a
     */

    double length() const;

    /**
     * @brief сравнивает равны ли вектора по длине 
     * @return yes или no
     */

    bool are_equal(const vector_3d& other) const;

    std::string to_string() const;

    friend std::ostream& operator << (std::ostream& out, const vector_3d& vector);

};
