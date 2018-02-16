//
//  Example5.cpp
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
    // Fixed vs Dynamic size
    // So do I use fixed sizes such as Matrix4f
    // or should I use dynamic sizes such as MatrixXf?
    
    // First let's talk about the stack and the heap
    
    // They are both used for memory allocation stored on
    // the computers RAM
    // Access to memory on the stack is faster than
    // Accessing memory on the heap
    
    // This is because there is an order to the way
    // memory is allocated to the stack called LIFO (last
    // in first out)
    // when a function is called a block on top of the
    // stack is reserved for it, if there is a function
    // within that function, another block of memory
    // is allocated on top of that block and so on and
    // so forth.
    // The most nested function will return first, which
    // means the stack only ever needs deallocate the memory
    // block that was most recently allocated which is
    // always the top block.
    
    // This is different for the heap though, any block
    // of memory could get allocated or deallocated at
    // any time during run time which could make things
    // get more complex, making it generally longer to
    // access heap memory
    
    // The benefit of the heap is that it can request the
    // computer for more memory when it runs out
    // The stack determines its memory size often at the
    // start of the program, when a program attempts to
    // use more memory than is available on the stack
    // this is what you call stack overflow
    
    // Okay that is enough on that, lets get back to
    // Matrices and how this memory allocation
    // applies it in the next video.
    
    return 0;
}
