#pragma once

//===============================================================================================================================================

#include <cmath>

//===============================================================================================================================================

#include "dot.hpp"

//===============================================================================================================================================

namespace Geometry
{
    struct Segment
    {
        Dot     a;
        Dot     b;

        //-----------------------------------------------------------------------------------------------------------------------------------------------

        Segment(Dot A = Dot{}, Dot B = Dot{});
        Segment(LengthT x_1 = NAN, LengthT y_1 = NAN, LengthT x_2 = NAN, LengthT y_2 = NAN);

        //-----------------------------------------------------------------------------------------------------------------------------------------------

        bool is_valid();
        void print();
    };
}

//===============================================================================================================================================
