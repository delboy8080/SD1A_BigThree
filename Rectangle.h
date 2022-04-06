//
// Created by floodd on 05/04/2022.
//

#ifndef SAM14_BIG_THREE_RECTANGLE_H
#define SAM14_BIG_THREE_RECTANGLE_H
#include <iostream>
using namespace std;

class Rectangle {
    int *location;
    int w;
    int h;
public:

    Rectangle(int x = 0, int y =0, int w=1, int h =1);
    Rectangle(const Rectangle &other);
    friend ostream& operator<<(ostream& out,
            const Rectangle &rect);
    ~Rectangle();

};


#endif //SAM14_BIG_THREE_RECTANGLE_H
