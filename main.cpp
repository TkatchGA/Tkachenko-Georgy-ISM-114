#include <iostream>
#include "vector_3d.cpp"
using namespace std;


int main() {

    vector_3d vectorTest;
    vectorTest.sum();
    vectorTest.div();
    vectorTest.scalar_product();
    vectorTest.mult_scal();
    vectorTest.compr_vector();
    vectorTest.length();
    vectorTest.compr_vector_length();

    return 0;
}