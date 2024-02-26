#include "Point.h"
#include "RightAngledTriangle.h"
#include <iostream>

int main()
{
    RightAngledTriangle triangle;
    std::cout << "Enter Triangle Points: ";
    std::cin >> triangle;

    cout << triangle.area();
}