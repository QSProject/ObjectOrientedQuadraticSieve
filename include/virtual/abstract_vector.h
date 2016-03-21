#ifndef QSABSTRACT_VECTOR_GUARD
#define QSABSTRACT_VECTOR_GUARD


#include "./utils/abstract_id.h"
2
namespace QS {
namespace numeric {

template <class T>
class QSAbstract_vector {
     
public:

   virtual 
   ~QSAbstract_vector();

   virtual 
   void resize(unsigned dim) = 0;

   virtual
   void resize(unsigned s, const T& initial_value) = 0;

   virtual
   unsigned size() = 0;	

   virtual
   T get_elem(unsigned i) = 0;

   virtual
   void set_elem(unsigned i, const T& elem) = 0;

   virtual
   void calc_wt() = 0;

   virtual
   void calc_lft_1_bit() = 0;

   virtual
   void set_id() = 0;   
   
};


} // end of namespace numeric
} // end of namespace QS

#endif // QSABSTRACT_VECTOR_GUARD