//===============================================================================================================================================

#include <cstdint>
#include <iostream>
#include <new>
#include <sys/types.h>

//===============================================================================================================================================

#include "Geometry/dot.hpp"
#include "Geometry/segment.hpp"
#include "Geometry/polygon.hpp"

//===============================================================================================================================================

int main ()
{
    uint32_t number_of_sides;
    std::cout << "Enter number of sides\n";
    std::cin >> number_of_sides;

    Geometry::Dot dot_for_input{};
    Geometry::Dot* dots_array = new Geometry::Dot[number_of_sides];
    for (uint32_t cnt = 0; cnt != number_of_sides; ++cnt)
    {
        std::cout << "Enter 2 coordinates\n";
        std::cin >> dot_for_input.x >> dot_for_input.y;

        dots_array[cnt] = dot_for_input;
    }

    Geometry::Polygon first_polygon{3, dots_array};

    first_polygon.print();
}

//===============================================================================================================================================
