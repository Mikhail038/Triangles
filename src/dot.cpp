//===============================================================================================================================================
//27.07.23
//===============================================================================================================================================

#include "dot.hpp"

//===============================================================================================================================================

#include <cmath>
#include <iostream>

//===============================================================================================================================================

namespace Geometry
{
    Dot::Dot(double X, double Y) :
        x(X),
        y(Y)
    {}

    bool Dot::is_valid ()
    {
        return !(std::isnan(x) || std::isinf(x) || std::isnan(y) || std::isinf(y));
    }

    void Dot::print ()
    {
        std::cout << "x: " << x << " y: " << y << std::endl;
    }
}

//===============================================================================================================================================