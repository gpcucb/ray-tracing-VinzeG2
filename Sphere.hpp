//
//  Sphere.hpp
//  ray-tracing-VinzeG2
//
//  Created by Vinze Gonzales on 3/14/17.
//  Copyright © 2017 VG2. All rights reserved.
//

#ifndef Sphere_hpp
#define Sphere_hpp

#include <stdio.h>
#include "Vector.hpp"

class Sphere
{
public:
    Sphere(Vector,float);
    virtual ~Sphere();
    float intersection(Vector,Vector);
    
protected:
    
private:
    float radius, infinity;
    Vector origin;

    
};

#endif /* Sphere_hpp */
