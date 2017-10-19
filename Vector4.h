#ifndef __GMATH_VECTOR4_H
#define __GMATH_VECTOR4_H
// 齐次坐标
namespace gmath
{
    class Vector4
    {
    public:
        Vector4(float v = 0.f);
        Vector4(const Vector4& v);
        Vector4(float x, float y, float z, float w);
        Vector4(Vector4&& v);

        Vector4& operator = (const Vector4& r);
        bool operator == (const Vector4& r) const; 
        float operator * (const Vector4& r) const;             // 点乘
        Vector4 operator * (float n) const;                    // 数乘
        friend Vector4 operator * (float l, const Vector4& r); //  

    public:
        float x, y, z, w;
    };
}

#endif