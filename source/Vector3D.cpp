#include "Vector3D.h"

#include <cmath>

Vector3D::Vector3D()
: x{ 0.0f }
, y{ 0.0f }
, z{ 0.0f }
{

}

Vector3D::Vector3D(const float in_x, const float in_y, const float in_z)
: x{ in_x }
, y{ in_y }
, z{ in_z }
{

}

Vector3D::~Vector3D()
{

}

float Vector3D::length_squared() const
{
    return (x * x) + (y * y) + (z * z);
}

float Vector3D::length() const
{
    return std::sqrt(length_squared());
}