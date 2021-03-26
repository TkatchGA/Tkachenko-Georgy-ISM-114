#include <iostream>
#include "vector_3d.h"
using namespace std;


int main() {

    vector_3d vector_test;
    vector_test.sum();
    vector_test.div();
    vector_test.scalar_product();
    vector_test.mult_scal();
    vector_test.compr_vector();
    vector_test.length();
    vector_test.are_equal();

    return 0;
}