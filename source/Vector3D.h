#ifndef VECTOR3D_H
#define VECTOR3D_H

class Vector3D
{
public:
    Vector3D();
    Vector3D(const float in_x, const float in_y, const float in_z);
    ~Vector3D();

    float length_squared() const;
    float length() const;

public:
    float x;
    float y;
    float z;
};

#endif