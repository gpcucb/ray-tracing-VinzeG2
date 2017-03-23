//
//  Triangle.hpp
//  ray-tracing-VinzeG2
//
//  Created by Vinze Gonzales on 3/23/17.
//  Copyright © 2017 VG2. All rights reserved.
//

#ifndef Triangle_hpp
#define Triangle_hpp

#include <stdio.h>
#include "Vector.hpp"

class Triangle
{
public:
    Triangle(Vector,Vector,Vector);
    virtual ~Triangle();
    float intersection(Vector,Vector);
    
protected:
    
private:
    Vector a,b,c;
    
    
};


#endif /* Triangle_hpp */
