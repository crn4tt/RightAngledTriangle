#ifndef RIGHTANGLEDTRIANGLE_H
#define RIGHTANGLEDTRIANGLE_H

#include "Point.h"


class RightAngledTriangle
{
    public:
        MPoint a, b, c;

        RightAngledTriangle();
        RightAngledTriangle(MPoint a, MPoint b, MPoint c);
        RightAngledTriangle(const RightAngledTriangle& triangle);

        RightAngledTriangle& operator=(const RightAngledTriangle& triangle);

        friend istream& operator>>(istream& in, RightAngledTriangle& triangle)
        {
            in >> triangle.a >> triangle.b >> triangle.c;
        
            if (!triangle.isRight())
            {
                throw invalid_argument("The Triangle is not Right Angled!");
            }

            return in;
        }

        friend ostream& operator<<(ostream& out, RightAngledTriangle& triangle)
        {
            out << "(" << triangle.a << ", " << triangle.b << ", " << triangle.c << ")";
            return out;
        }

        double area();
        
        bool isRight();
    private:
        double _distance(MPoint point1, MPoint point2);
        void _swap(double& a, double& b);
};

#endif