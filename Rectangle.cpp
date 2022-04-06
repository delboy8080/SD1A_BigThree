//
// Created by floodd on 05/04/2022.
//

#include "Rectangle.h"

ostream& operator<<(ostream& out,
                    const Rectangle &rect)
{
    out << "(" << rect.location[0]<<", " << rect.location[1]<<")";
    out << "width:" << rect.w << ";  height:" << rect.h
    <<endl;
    return out;
}
Rectangle::Rectangle(const Rectangle &other)
{
    this->w = other.w;
    this->h = other.h;
    this->location = new int[2];
    this->location[0] = other.location[0];
    this->location[1] = other.location[1];

}
Rectangle::Rectangle(int x, int y, int w, int h)
{
    location = new int[2];
    location[0] = x;
    location[1] =y;
    this->w = w;
    this->h = h;
}

Rectangle:: ~Rectangle()
{
    cout << "Destructor called"<<endl;
    delete[] location;
}