//
//  Camera.cpp
//  ray-tracing-VinzeG2
//
//  Created by Vinze Gonzales on 3/9/17.
//  Copyright © 2017 VG2. All rights reserved.
//

#include "Camera.hpp"

Camera::Camera()
{
    
}

Camera::Camera(Vector a, Vector b, Vector c)
{
    e = a;
    center = b;
    up = c;
}

Camera::~Camera()
{
    //dtor
}

Vector Camera::vectorW()
{
    float x,y,z;
    Vector distance;
    distance = e.minus(center);
    x=distance.getX()/distance.module();
    y=distance.getY()/distance.module();
    z=distance.getZ()/distance.module();
    Vector result(x,y,z);
    return result;
}

Vector Camera::vectorU(Vector vectorW)
{
    float x,y,z;
    Vector product;
    product = up.vectorialProduct(vectorW);
    x = product.getX()/product.module();
    y = product.getY()/product.module();
    z = product.getZ()/product.module();
    Vector result(x,y,z);
    return result;
}


Vector Camera::vectorV(Vector vectorW, Vector vectorU)
{
    Vector product;
    product = vectorW.vectorialProduct(vectorU);
    return product;
}


Vector Camera::rayDirection(float i, float j, float nx, float ny)
{
    float u,v;
    float l = 0;
    float r = nx;
    float t = ny;
    float b = 0;
    float d = 10;
    
    u = l + (r - l)*(i+0.5)/nx;
    v = b + (t - b)*(j+0.5)/ny;
    
    Vector rayDirection;
    
    Vector vecU, vecW, vecV;
    vecW = vectorW();
    vecU = vectorU(vecW);
    vecV = vectorV(vecW,vecU);
    
    
    Vector D = vecW.product(d);
    Vector U = vecU.product(u);
    Vector V = vecV.product(v);
    
    Vector negativeD = D.product(-1);
    Vector DplusU = negativeD.plus(U);
    rayDirection = DplusU.plus(V);
    
    return rayDirection;    
}

