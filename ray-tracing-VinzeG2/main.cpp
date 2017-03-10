//
//  main.cpp
//  ray-tracing-VinzeG2
//
//  Created by Vinze Gonzales on 2/21/17.
//  Copyright © 2017 VG2. All rights reserved.
//

#include <iostream>

#include "Vector.hpp"
#include "Camera.hpp"
#include "Ray.hpp"


using namespace std;
int main()
{
    cout << "Hello world!" << endl;
    
    Vector e(1,2,-6);
    Vector center(1,2,-4);
    Vector up(0,1,0);
    float fov = 39;
    float df =1;
    float nx = 640;
    float ny = 480;
    
    Camera camera(e,center,up,fov,df);
    Vector dir;
    
    
    for (int i = 0; i < nx; i++) {
        for (int j = 0; j < ny; j++) {
            dir = camera.rayDirection(i, j, nx, ny);
            dir.show();
            cout<<endl;
        }
    }
    
    return 0;
}
