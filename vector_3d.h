#pragma once
#include <string>


/**
 * @brief Данную функцию, я использую для считывания данных второго вектора в массив
 * @return int* 
 */

int* request_coord();

/**
* @brief класс описывающий работу с векторами
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
     * @brief конструктор по умолчанию
     */
    vector_3d();


    /**
     * @brief Параметризированный конструктор
     * @param x Координата вектора по x
     * @param y Координата вектора по y
     * @param z Координата вектора по z
     */
    vector_3d(const double x, const double y, const double z);
    
    /**
     * @brief Конструктор копирования
     */

    vector_3d(const vector_3d& other);

    /**
     * @brief Деструктор
     */
    ~vector_3d();

    /**
     * @brief возвращает сумму двух векторов
     * @return сумма первого и второго вектора
     * я предполгаю что в дальнейшем нужно будет использовать структуры 
     * для хранения координат вектора x, y, z. 
     */
    double sum() const;

    /**
     * \brief возвращает разность двух векторов
     * \return разность первого и второго вектора
     */
    double div() const;

    /**
     * \brief возвращает скалярное произведение векторов
     * \return скалярное произведение векторов
     */
    double scalar_product() const;

    /**
     * \brief возвращает умножение первого верктора на скаляр
     * \return умноженный вектор на скаляр
     */
    double mult_scal() const;

    /**
     * \brief сравнивает два вектора
     * \return возвращает сообщение о том какой вектор больше
     */
    std::string compr_vector() const;

    /**
     * \brief вычисляет длину первого вектора
     * \return длина вектора
     */
    double length() const;

    /**
     * \brief сравнивает два вектора
     * \return возвращает сообщение о том равныли вектора
     */
    std::string are_equal() const;

};