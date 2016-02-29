
#ifndef  ABSTRACT_VECTOR_GUARD
#define ABSTRACT_VECTOR_GUARD

namespace QS{
namespace numeric{

template <typename T>
class Abstract_vector {
     
public:

   virtual 
   void resize(unsigned dim) = 0;

   virtual
   unsigned size() = 0;	

   const T operator[](unsigned i) const; // for reading 
   
   T& operator[](unsigned i); // for writing
   
   
};


} // end of namespace numeric
} // end of namespace QS

#endif // ABSTRACT_VECTOR_GUARD