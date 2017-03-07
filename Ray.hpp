//
//  Ray.hpp
//  ray-tracing-VinzeG2
//
//  Created by Vinze Gonzales on 3/7/17.
//  Copyright © 2017 VG2. All rights reserved.
//

#ifndef Ray_hpp
#define Ray_hpp
#include "Vector.hpp"

class Ray
{
public:
    Ray();
    virtual ~Ray();
    
protected:
    
private:
    Vector posicion;
    Vector direccion;
    
};

#endif /* Ray_hpp */
