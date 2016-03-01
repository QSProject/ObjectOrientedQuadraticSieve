
#ifndef  VECTOR_GUARD
#define VECTOR_GUARD

#include "./virtual/abstract_vector.h"
#include <iostream> 
#include <vector>

namespace QS{
namespace numeric{

template <class T>
class Vector : public Abstract_vector<T> {
   
private:
   unsigned dim;
   std::vector<T> vec;
   unsigned long leftmost_1_bit;
   unsigned long weight;      
  
public:
   
   Vector();

   Vector(unsigned dim);

   Vector(unsigned dim, const T& initial_value);

   unsigned size();

   void resize(unsigned s);

   void resize(unsigned s, T initial_value);

   T& get_elem(unsigned i);

   void set_elem(unsigned i, T elem);

   T& operator[](unsigned i); // for writing

   const T& operator[](unsigned i) const; // for reading

   Vector<T> operator+(const Vector<T> &v) const;

   Vector sum_row(Vector<T> v1, Vector<T> v2);
   
   void calc_wt();

   void calc_lft_1_bit();
};


} // end of namespace numeric
} // end of namespace QS

#endif // VECTOR_GUARD