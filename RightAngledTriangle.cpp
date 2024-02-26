#include "RightAngledTriangle.h"
#include "Point.h"
#include <cmath>


RightAngledTriangle::RightAngledTriangle()
{
    this->a = MPoint(0, 0);
    this->b = MPoint(0, 1);
    this->c = MPoint(1, 0);

    if (!isRight())
    {
        throw invalid_argument("The Triangle is not Right Angled!");
    }
}

RightAngledTriangle::RightAngledTriangle(const RightAngledTriangle& triangle)
{
    this->a = triangle.a;
    this->b = triangle.a;
    this->c = triangle.a;
}

RightAngledTriangle& RightAngledTriangle::operator=(const RightAngledTriangle& triangle)
{
    if (this != &triangle)
    {
        this->a = triangle.a;
        this->b = triangle.b;
        this->c = triangle.c;
    }
    return *this;
}

double RightAngledTriangle::_distance(MPoint point1, MPoint point2)
{
    return sqrt((point1.x - point2.x) * (point1.x - point2.x) + (point1.y - point2.y) * (point1.y - point2.y));
}

double RightAngledTriangle::area()
{
    double ab = _distance(this->a, this->b);
    double bc = _distance(this->b, this->c);
    double ac = _distance(this->a, this->c);

    double p = (ab + bc + ac) / 2;

    return sqrt(p * (p - ab) * (p - bc) * (p - ac));
}

bool RightAngledTriangle::isRight()
{
    double ab = _distance(this->a, this->b);
    double bc = _distance(this->b, this->c);
    double ac = _distance(this->a, this->c);

    if (ab > bc) 
    {
        _swap(ab, bc);
    }

    if (bc > ac) 
    {
        _swap(bc, ac);
    }

    if (ab > bc) 
    {
        _swap(ab, bc);
    }

    return abs(ac * ac - (ab * ab) - (bc * bc)) < 0.0000001;
}

void RightAngledTriangle::_swap(double& a, double& b)
{
    double tmp = a;
    a = b;
    b = tmp;
}

