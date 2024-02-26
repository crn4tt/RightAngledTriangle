#ifndef POINT_H
#define POINT_H

#include <iostream>

using namespace std;

class MPoint 
{
    public:
        double x, y;

        MPoint();
        MPoint(double x, double y);
        MPoint(const MPoint& point);

        MPoint& operator=(const MPoint& point);

        friend std::istream& operator>>(std::istream& in, MPoint& point)
        {
            in >> point.x >> point.y;
            return in;
        }

        friend ostream& operator<<(std::ostream& out, const MPoint& point)
        {
            out << "(" << point.x << ", " << point.y << ")";
            return out;
        }
};

#endif