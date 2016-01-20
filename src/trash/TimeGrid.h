#ifndef TIMEGRID_H_INCLUDED
#define TIMEGRID_H_INCLUDED

#include <boost/numeric/ublas/vector.hpp>

namespace mctr {
    class TimeGrid {
    public:
        TimeGrid();
        virtual ~TimeGrid();
        std::size_t size() const;
        double operator()(const std::size_t i);
        // wand to add setter to (TimeGrid) _data
        //void operator =(TimeGrid& timeGrid);
    
    private:
        enum _grids
        {
            ON,
            TN,
            1W,
            2W,
            1M,
            2M,
            3M,
            6M,
            9M, 
            1Y,
            2Y,
            3Y,
            4Y,
            5Y,
            6Y,
            7Y,
            8Y,
            9Y,
            10Y,
            15Y,
            20Y,
            30Y
        };
        //boost::numeric::ublas::vector<double> _data;
    };
} // namespace mctr {
#endif // TIMEGRID_H_INCLUDED
