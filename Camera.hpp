//
//  Camera.hpp
//  ray-tracing-VinzeG2
//
//  Created by Vinze Gonzales on 3/9/17.
//  Copyright © 2017 VG2. All rights reserved.
//

#ifndef Camera_hpp
#define Camera_hpp

#include <stdio.h>
#include "Vector.hpp"

class Camera
{
public:
    Camera();
    Camera(Vector,Vector,Vector);
    virtual ~Camera();
    Vector vectorW();
    Vector vectorU(Vector);
    Vector vectorV(Vector,Vector);
    Vector rayDirection(float,float,float,float);
    
protected:
    
private:
    Vector e;
    Vector center;
    Vector up;
    
};


#endif /* Camera_hpp */
