#ifndef TIMEGRID_H_INCLUDED
#define TIMEGRID_H_INCLUDED

namespace mctr {
    class TimeGrid {
    public:
        virtual ~TimeGrid();
        virtual double operator()(const std::size_t i);
    private:
        virtual double getGridImpl(const std::size_t i) const = 0;


    };

} // namespace mctr {

#endif // TIMEGRID_H_INCLUDED

