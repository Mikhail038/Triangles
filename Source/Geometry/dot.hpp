#pragma once

//===============================================================================================================================================

#include <cmath>

//===============================================================================================================================================

namespace Geometry
{
    using LengthT = double;

    struct Dot
    {
        LengthT x;
        LengthT y;

        //-----------------------------------------------------------------------------------------------------------------------------------------------

        Dot(LengthT x_coord = NAN, LengthT y_coord = NAN);

        //-----------------------------------------------------------------------------------------------------------------------------------------------

        bool is_valid();
        void print();

    };
}

//===============================================================================================================================================