#include <iostream>
#include "vector_3d.h"



int main() {

    vector_3d vector_test = vector_3d(1, 4, 5);
    
    const vector_3d second = vector_3d(1.0, 2.0, 3.0);
    const vector_3d sum = vector_test.sum(second);
    //const vector_3d sum_double = vector_test.sum(1, 2, 3);
    std::cout << "sum= " <<  sum << "\n";


    const vector_3d third = vector_3d(2.0, 3.0, 4.0);
    const vector_3d sub = vector_test.sub(third);
    std::cout << "sub= " << sub << "\n";

    const vector_3d fourth = vector_3d(3.0, 3.0, 3.0);
    const double scalar_product = vector_test.scalar_product(fourth);
    std::cout << "scalar_product= " << scalar_product << "\n";


    const double fifth = 5.0;
    const double mult_scal = vector_test.mult_scal(fifth);
    std::cout << "mult_scal= " << mult_scal << "\n";

    const vector_3d sixth = vector_3d(2.0, 3.0, 4.0);
    const bool compr_vector = vector_test.compr_vector(sixth);
    std::cout << "compr_vector= " << compr_vector << "\n";

    const double length = vector_test.length();
    std::cout << "length= " << length << "\n";

    const vector_3d seventh = vector_3d(2.0, 3.0, 4.0);
    const bool are_equal = vector_test.are_equal(seventh);
    std::cout << "are_equal= " << are_equal << "\n";

    std::cout << std::endl;
    return 0;
}