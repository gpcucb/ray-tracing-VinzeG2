//
//  Vector.cpp
//  ray-tracing-VinzeG2
//
//  Created by Vinze Gonzales on 3/7/17.
//  Copyright © 2017 VG2. All rights reserved.
//

#include "Vector.hpp"
#include <iostream>

using namespace std;

Vector::Vector()
{
    x = 0;
    y = 0;
    z = 0;
}

Vector::Vector(float a, float b, float c)
{
    x = a;
    y = b;
    z = c;
}

Vector::~Vector()
{
    //dtor
}

void Vector::mostrar()
{
    cout<<"<"<<x<<","<<y<<","<<z<<">";
}

void Vector::sumar(Vector A)
{
    x = x + A.x;
    y = y + A.y;
    z = z + A.z;
    
}


void Vector::restar(Vector A)
{
    x = x - A.x;
    y = y - A.y;
    z = z - A.z;
}
