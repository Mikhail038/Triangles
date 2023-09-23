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

        Segment(Dot first_dot = Dot{}, Dot second_dot = Dot{});
        Segment(LengthT x_1 = NAN, LengthT y_1 = NAN, LengthT z_1 = NAN, LengthT x_2 = NAN, LengthT y_2 = NAN, LengthT z_2 = NAN);

        //-----------------------------------------------------------------------------------------------------------------------------------------------

        bool is_valid();
        void print();
    };
}

//===============================================================================================================================================
