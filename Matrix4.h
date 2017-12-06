#ifndef __GMATH_MATRIX4_H
#define __GMATH_MATRIX4_H
#include "macros.h"

gmath_begin
class Matrix4
{
public:
    Matrix4(float v = 0); 
    Matrix4(const Matrix4& m); 

    Matrix4& LoadIdentity();   // unit matrix 

    float* operator [](int c); // [][] operator 

protected: 
    float m[4][4];
};
gmath_end

#endif