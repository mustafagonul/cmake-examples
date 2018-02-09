#include "geometry/point.hpp"


namespace geometry {


template <typename Type>
point<Type>::point(value_type x_, value_type y_, value_type z_) noexcept
  : x{x_}
  , y{y_}
  , z{z_}
{
}

template <typename Type>
void point<Type>::add(point_const_reference p) noexcept
{
  x += p.x;
  y += p.y;
  z += p.z;
}

template <typename Type>
void point<Type>::sub(point_const_reference p) noexcept
{
  x -= p.x;
  y -= p.y;
  z -= p.z;
}



template class matrix<double>;
template class matrix<float>;


} // geometry