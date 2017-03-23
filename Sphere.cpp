//
//  Sphere.cpp
//  ray-tracing-VinzeG2
//
//  Created by Vinze Gonzales on 3/14/17.
//  Copyright © 2017 VG2. All rights reserved.
//

#include "Sphere.hpp"
#include <math.h>
#include <iostream>

using namespace std;

Sphere::Sphere(Vector centre, float rad)
{
    origin = centre;
    radius = rad;
    infinity = numeric_limits<float>::infinity();
}

Sphere::~Sphere()
{
    //dtor
}

float Sphere::intersection(Vector rayOrigin, Vector rayDirection)
{
    
    float A, B, C;
    float t;
    A = rayDirection.scalarProduct(rayDirection);
    B = rayDirection.numberProduct(2).scalarProduct(rayOrigin.minus(origin));
    C = rayOrigin.minus(origin).scalarProduct(rayOrigin.minus(origin));
    
    float discriminant;
    discriminant = powf(B, 2) - 4 * A * C;
    
    if (discriminant >= 0) {
        float t0 = (-B - sqrtf(discriminant))/(2*A);
        float t1 = (-B + sqrtf(discriminant))/(2*A);
        
        if (t0 > 0.0 && t0 < infinity) {
            t = t1;
            return true;
        }
        if (t1 > 0.0 && t1 < infinity) {
            return true;
        }
    }
    return false;
}
