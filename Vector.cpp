//
//  Vector.cpp
//  ray-tracing-VinzeG2
//
//  Created by Vinze Gonzales on 3/7/17.
//  Copyright © 2017 VG2. All rights reserved.
//

#include "Vector.hpp"
#include <math.h>
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

void Vector::show()
{
    cout<<"<"<<x<<","<<y<<","<<z<<">";
}

Vector Vector::plus(Vector A)
{
    float a,b,c;
    a = x + A.x;
    b = y + A.y;
    c = z + A.z;
    Vector result(a,b,c);
    return result;
    
}


Vector Vector::minus(Vector A)
{
    float a,b,c;
    a = x - A.x;
    b = y - A.y;
    c = z - A.z;
    Vector result(a,b,c);
    return result;
}


float Vector::module()
{
    return sqrtf(pow(x, 2) + pow(y, 2) + pow(z, 2));
}

Vector Vector::vectorialProduct(Vector B)
{
    float a,b,c;
    a = y*B.z - z*B.y;
    b = x*B.z - z*B.x;
    c = x*B.y - y*B.x;
    Vector result(a,b,c);
    return result;
}

float Vector::scalarProduct(Vector B)
{
    float a,b,c;
    a = x*B.x;
    b = y*B.y;
    c = z*B.z;
    float result = a+b+c;
    return result;
}

Vector Vector::numberProduct(float number)
{
    float a,b,c;
    a = x*number;
    b = y*number;
    c = z*number;
    Vector result(a,b,c);
    return result;
    
}
