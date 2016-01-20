#ifndef PATH_H_INCLUDED
#define PATH_H_INCLUDED

#include <boost/shared_ptr.hpp>

#include "TimeGrid.h"

namespace mctr {
    class Path {
    public:
        Path(boost::shared_ptr<TimeGrid> timeGrid);
        ~Path();
        double operator()(const std::size_t i);
        void operator =(Path& path);
    
    private:
        boost::shared_ptr<TimeGrid> _grids;
    
    };

} // namespace mctr

#endif // PATH_H_INCLUDED
