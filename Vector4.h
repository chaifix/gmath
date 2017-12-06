#ifndef __GMATH_VECTOR4_H
#define __GMATH_VECTOR4_H
#include "macros.h"
// Æë´Î×ø±ê
gmath_begin
class Vector4
{
public:
    Vector4(float v = 0.f);
    Vector4(const Vector4& v);
    Vector4(float x, float y, float z, float w);
    Vector4(Vector4&& v);
	
    Vector4& operator = (const Vector4& r);
    bool operator == (const Vector4& r) const; 
    float operator * (const Vector4& r) const;             
    Vector4 operator * (float n) const;                    
    friend Vector4 operator * (float l, const Vector4& r); 

public:
    float x, y, z, w;
};
gmath_end

#endif