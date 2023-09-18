//===============================================================================================================================================
//27.07.23
//===============================================================================================================================================

#include "dot.hpp"
#include "segment.hpp"

//===============================================================================================================================================

#include <cmath>
#include <iostream>
#include <iterator>

//===============================================================================================================================================

namespace Geometry
{
    Segment::Segment(Dot first_dot, Dot second_dot) :
        a(first_dot),
        b(second_dot)
    {
    }

    Segment::Segment(LengthT x_1, LengthT y_1, LengthT x_2, LengthT y_2) :
        a{x_1, y_1},
        b{x_2, y_2}
    {
    }

    //-----------------------------------------------------------------------------------------------------------------------------------------------

    bool Segment::is_valid ()
    {
        return (a.is_valid() && b.is_valid());
    }

    void Segment::print ()
    {
        std::cout << "A:: ";
        a.print();

        std::cout << "B:: ";
        b.print();

        std::cout << std::endl;
    }
}

//===============================================================================================================================================