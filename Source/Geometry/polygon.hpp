#pragma once

//===============================================================================================================================================

#include <cmath>
#include <cstddef>
#include <cstdint>
#include <vector>

//===============================================================================================================================================

#include "dot.hpp"
#include "segment.hpp"

#include "../Array/arrayT.hpp"

//===============================================================================================================================================

namespace Geometry
{
    using DotArr     = std::vector<Dot>;
    using SegmentArr = std::vector<Segment>;

    struct Polygon
    {
        public:
        DotArr        verticies;
        SegmentArr    sides;

        private:
        size_t  number_of_sides;

        //-----------------------------------------------------------------------------------------------------------------------------------------------
        public:

        Polygon();
        Polygon(uint32_t sides_number, Dot* dots_array);
        // Polygon(uint32_t args_number, ...);

        //-----------------------------------------------------------------------------------------------------------------------------------------------
        private:

        void add_vertice (const Dot vertice);
        void add_side (const Segment side);
        void add_side (const Dot dot_1, const Dot dot_2);

        void create_sides ();

        //-----------------------------------------------------------------------------------------------------------------------------------------------
        public:

        uint32_t get_number_of_sides();
        bool is_valid();
        void print();
    };
}

//===============================================================================================================================================
