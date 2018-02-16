//
//  Example6.cpp
//  Eigen_Tutorial
//
//  Created by Xavier Poon on 16/02/2018.
//  Copyright © 2018 CreativityInk. All rights reserved.
//

#include <iostream>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

int main()
{
    
    // A a rule of thumb if the size (total number of
    // coefficients in a matrix is roughly less than 16
    // use fixed sizes because this benefits perfomance alot
    // as this would avoid dynamic memory allocation and
    // avoid loops
    
    // A dynamic-size matrix allocates memory on the heap
    // If dealing with matrices that have sizes greater
    // than roughly 32, the performance benefit of using
    // fixed sizes becomes negligible. Also if a fixed-sized
    // matrix is allocated a local variable which is done on
    // the stack this could lead to stack overflow
    
    
    
    
    return 0;
}
