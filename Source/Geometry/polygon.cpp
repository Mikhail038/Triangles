//===============================================================================================================================================
//27.07.23
//===============================================================================================================================================

#include "dot.hpp"
#include "polygon.hpp"
#include "segment.hpp"

//===============================================================================================================================================

#include <cmath>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <iostream>
#include <iterator>
#include <stdarg.h>

//===============================================================================================================================================

namespace Geometry
{
    Polygon::Polygon() :
        number_of_sides(0)
    {}

    Polygon::Polygon(uint32_t sides_number, Dot* dots_array) :
        number_of_sides(sides_number)
    {
        for (uint32_t cnt = 0; cnt != number_of_sides; ++cnt)
        {
            add_vertice(dots_array[cnt]);
        }
    }
//     Polygon::Polygon(uint32_t args_number, ...) :
//         number_of_sides(args_number)
//     {
//         verticies.reserve(args_number);
//
//         va_list arguments;
//         va_start(arguments, args_number);
//         for (uint32_t cnt = 0; cnt != args_number; ++cnt)
//         {
//             add_vertice(va_arg(arguments, Dot));
//         }
//         va_end(arguments);
//
//         create_sides();
//     }

    //-----------------------------------------------------------------------------------------------------------------------------------------------

    void Polygon::add_vertice (const Dot vertice)
    {
        verticies.push_back(vertice);
    }

    void Polygon::add_side (const Segment side)
    {
        sides.push_back(side);
    }

    void Polygon::add_side (const Dot dot_1, const Dot dot_2)
    {
        sides.push_back({dot_1, dot_2});
    }

    void Polygon::create_sides ()
    {
        uint32_t size = verticies.size();
        for (uint32_t cnt = 0; cnt != size; ++cnt)
        {
            add_side({verticies[cnt], verticies[cnt + 1]});
        }
    }

    //-----------------------------------------------------------------------------------------------------------------------------------------------

    uint32_t Polygon::get_number_of_sides()
    {
        return number_of_sides;
    }

    bool Polygon::is_valid ()
    {
        bool RetValue = true;

        for (size_t cnt = 0; cnt != number_of_sides; ++cnt)
        {
            RetValue = RetValue && sides[cnt].is_valid();
        }

        return RetValue;
    }

    void Polygon::print ()
    {

        for (size_t cnt = 0; cnt != number_of_sides; ++cnt)
        {
            std::cout << cnt << "::: " << std::endl;
            sides[cnt].print();
        }

        std::cout << std::endl;
    }

    //-----------------------------------------------------------------------------------------------------------------------------------------------
}

//===============================================================================================================================================
