#ifndef QSVECTOR_GUARD
#define QSVECTOR_GUARD

#include "./virtual/abstract_vector.h"
#include <iostream> 
#include <vector>

namespace QS {
namespace numeric {

template <class T>
class QSVector : public QSAbstract_vector<T> {
   
private:
   unsigned dim;
   std::vector<T> vec;
   unsigned long leftmost_1_bit;
   unsigned long weight;      

public:

   QSVector();

   QSVector(unsigned dim);

   QSVector(unsigned dim, const T& initial_value);

   unsigned size();

   void resize(unsigned s);

   void resize(unsigned s, const T& initial_value);

   T get_elem(unsigned i);

   void set_elem(unsigned i, T elem);

   T& operator[](unsigned i); // for writing

   const T& operator[](unsigned i) const; // for reading

   QSVector<T> operator+(const QSVector<T>& v) const;

   QSVector sum_row(QSVector<T> v1, QSVector<T> v2);
   
   void calc_wt();

   void calc_lft_1_bit();
};

#include "template/vector.templates.h"

} // end of namespace numeric
} // end of namespace QS


#endif // QSVECTOR_GUARD

