
#indef  VECTOR_GUARD
#define VECTOR_GUARD

#include "../virtual/Vector"
#include <iostream> 

namespace QS{
namespace numeric{

template <typename T>
class Vector {
   
private:
   std::size_t size;
   T* vec;
   unsigned long leftmost_1_bit;
   unsigned long weight;      
  
public:
   
   Vector();

   Vector(std::size_t t);

   Vector(std::size_t t, T initial_value);

   T operator[]() const; // for reading
   
   T& operator[](); // for writing
   
   
};


} // end of namespace numeric
} // end of namespace QS

#endif // VECTOR_GUARD