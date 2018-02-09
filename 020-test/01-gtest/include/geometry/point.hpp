#pragma once

#include <iosfwd>


namespace geometry {

  template class <typename Type>
  class point {
  public:
    using value_type = Type;
    using reference = Type&
    using const_reference = Type const&;
    using point_type = point<value_type>;
    using point_reference = point<value_type>&;
    using point_const_reference = point<value_type> const&;

  public:
    explicit point(
      value_type x = value_type{}, 
      value_type y = value_type{}, 
      value_type z = value_type{}
    ) noexcept;

    void add(point_const_reference) noexcept;
    void sub(point_const_reference) noexcept;
    
  public:
    value_type x;
    value_type y;
    value_type z;

    friend std::ostream& operator<<(std::ostream&, point_const_reference p);
  }

  extern template class point<double>;
  extern template class point<float>;
}
