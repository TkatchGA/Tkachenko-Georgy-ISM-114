#include <iostream>
#include "vector_3d.h"



int main() {
    
    Vector_3d vector_test = vector_3d(1, 4, 5);
    std::cout << "sum= " << vector_test.sum(1, 2, 3) << "\n";
    std::cout << "div= " << vector_test.div(3, 2, 1) << "\n";
    std::cout << "scalar_product= " << vector_test.scalar_product(1, 2, 3) << "\n";
    std::cout << "mult_scal= " << vector_test.mult_scal(5) << "\n";
    std::cout << "compr_vector= " << vector_test.compr_vector(1, 2, 3) << "\n";
    std::cout << "length= " << vector_test.length() << "\n";
    std::cout << "are_equal= " << vector_test.are_equal(1, 4, 5) << "\n";

    std::cout << std::endl;
    return 0;
}