//
//  main.cpp
//  ray-tracing-VinzeG2
//
//  Created by Vinze Gonzales on 2/21/17.
//  Copyright © 2017 VG2. All rights reserved.
//

#include <iostream>

#include "Vector.hpp"


using namespace std;
int main()
{
    cout << "Hello world!" << endl;
    
    Vector A(1,2,3);
    Vector B(0,1,2);
    
    A.restar(B);
    A.mostrar();
    
    cout<<endl;
    
    A.sumar(A);
    A.mostrar();
    return 0;
}
