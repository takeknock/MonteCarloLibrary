#ifndef USDLIBORTIMEGRID_H_INCLUDED
#define USDLIBORTIMEGRID_H_INCLUDED

namespace mctr {
    class UsdLiborTimeGrid : public TimeGrid {
    public:

        UsdLiborTimeGrid();
    private:

        virtual double getGridImpl(const std::size_t i) const;


        const boost::numeric::ublas::vector<double> _grids =
            ;


    };
}

#endif // USDLIBORTIMEGRID_H_INCLUDED

