#include "TimeGrid.h"

namespace mctr {
    TimeGrid::TimeGrid(const int today)
    {
       /*
        ON = today + 1;
        TN = today + 2;
        1W = today + 7;
        2W = today + 14;
        1M = today + 30;
        2M = today + 60;
        3M = today + 90;
        6M = today + 180;
        9M = today + 270; 
        1Y = today + 365;
        2Y = today + 730;
        3Y = today + 1095;
        4Y = today + 1460;
        5Y = today + 1825;
        6Y = today + 2190;
        7Y = today + 2555;
        8Y = today + 2920;
        9Y = today + 3285;
        10Y = today + 3650;
        15Y = today + 5475;
        20Y = today + 5840;
        30Y = today + 6205;
        */
     }
    
    TimeGrid::~TimeGrid()
    {
    }
    
    std::size_t TimeGrid::size() const
    {
        return sizeof(_grids);
    }

    double& TimeGrid::operator()(const std::size_t i)
    {
        return _data(i);
    }

    //void TimeGrid::operator =(TimeGrid& timeGrid)
    //{
    //    this->_data.resize(timeGrid.size());
    //    for (std::size_t i = 0; i < timeGrid.size(); ++i) {
    //        this->_data(i) = timeGrid._data(i);
    //    }
    //}

}// namespace mctr {

