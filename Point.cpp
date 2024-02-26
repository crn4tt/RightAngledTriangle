// #include <istream>
// #include <ostream>
#include "Point.h"

// using namespace std;


MPoint::MPoint()
{
    x = 0;
    y = 0;
}

MPoint::MPoint(double x, double y)
{
    this->x = x;
    this->y = y;
}

MPoint::MPoint(const MPoint& point)
{
    this->x = point.x;
    this->y = point.y;
}

MPoint& MPoint::operator=(const MPoint& point)
{
    if (this != &point)
    {
        this->x = point.x;
        this->y = point.y;
    }

    return *this;
}