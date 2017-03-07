//
//  Vector.hpp
//  ray-tracing-VinzeG2
//
//  Created by Vinze Gonzales on 3/7/17.
//  Copyright © 2017 VG2. All rights reserved.
//

#ifndef Vector_hpp
#define Vector_hpp

class Vector
{
public:
    Vector();
    Vector(float,float,float);
    virtual ~Vector();
    void sumar(Vector);
    void restar(Vector);
    void mostrar();
protected:
    
private:
    float x, y, z;
};


#endif /* Vector_hpp */
