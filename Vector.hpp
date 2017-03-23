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
    float getX(){return x;};
    float getY(){return y;};
    float getZ(){return z;};
    Vector(float,float,float);
    virtual ~Vector();
    Vector plus(Vector);
    Vector minus(Vector);
    float module();
    Vector vectorialProduct(Vector);
    float scalarProduct(Vector);
    Vector numberProduct(float);
    void show();
protected:
    
private:
    float x, y, z;
};


#endif /* Vector_hpp */
