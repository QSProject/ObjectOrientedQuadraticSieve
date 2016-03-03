#ifndef QSABSTRACT_VECTOR_GUARD
#define QSABSTRACT_VECTOR_GUARD

namespace QS {
namespace numeric {

template <class T>
class QSAbstract_vector {
     
public:
   virtual 
   void resize(unsigned dim) = 0;

   virtual
   void resize(unsigned s, const T& initial_value) = 0;

   virtual
   unsigned size() = 0;	

   const T operator[](unsigned i) const; // for reading 
   
   T& operator[](unsigned i); // for writing
   
   
};


} // end of namespace numeric
} // end of namespace QS

#endif // QSABSTRACT_VECTOR_GUARD