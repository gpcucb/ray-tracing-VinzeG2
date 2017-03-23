//
//  Triangle.cpp
//  ray-tracing-VinzeG2
//
//  Created by Vinze Gonzales on 3/23/17.
//  Copyright © 2017 VG2. All rights reserved.
//

#include "Triangle.hpp"

Triangle::Triangle(Vector A, Vector B, Vector C)
{
    a = A;
    b = B;
    c = C;
}

Triangle::~Triangle()
{
    //dtor
}

float Triangle::intersection(Vector rayOrigin, Vector rayDirection)
{
    float Xab = a.getX() - b.getX();
    float Xac = a.getX() - c.getX();
    float Xd = rayDirection.getX();
    float Yab = a.getY() - b.getY();
    float Yac = a.getY() - c.getY();
    float Yd = rayDirection.getY();
    float Zab = a.getZ() - b.getZ();
    float Zac = a.getZ() - c.getZ();
    float Zd = rayDirection.getZ();
    
    float Xae = a.getX() - rayOrigin.getX();
    float Yae = a.getY() - rayOrigin.getY();
    float Zae = a.getZ() - rayOrigin.getZ();
    
    float determinantOf_A = Xab * (Yac * Zd - Yd * Zac) + Yab * (Xd * Zac - Xac * Zd) + Zab * (Xac * Yd - Yac * Xd);
    float beta = ( Xae * (Yac*Zd - Yd*Zac) + Yae * (Xd*Zac - Xac*Zd) + Zae * (Xac*Yd - Yac*Xd) )/determinantOf_A;
    float gama = ( Zd * (Xab*Yae - Xae*Yab) + Yd * (Xae*Zab - Xab*Zae) + Xd * (Yab*Zae - Yae*Zab) )/determinantOf_A;
//    float t = ( Zac * (Xab*Yae - Xae*Yab) + Yac * (Xae*Zab - Xab*Zae) + Xac * (Yab*Zae - Yae*Zab) )/determinantOf_A;
    
    if ((beta > 0) && (gama > 0) && ((beta + gama) < 1))
    {
        return true;
    }
    
    return false;
    
}
