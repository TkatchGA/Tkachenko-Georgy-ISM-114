#include "math_helper.h"
#include <limits>
#include <cmath>

bool are_equal(const double a, const double b)
{
    return fabs(a - b) <= std::numeric_limits<double>::min();
}
