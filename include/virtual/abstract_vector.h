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
   void resize(unsigned dim);

   virtual
   void resize(unsigned s, const T& initial_value);

   virtual
   unsigned size();	

   virtual
   T get_elem(unsigned i);

   virtual
   void set_elem(unsigned i, const T& elem);

   virtual
   void calc_wt();

   virtual
   void calc_lft_1_bit();

   virtual
   void set_id();   
   
};


} // end of namespace numeric
} // end of namespace QS

#endif // QSABSTRACT_VECTOR_GUARD
