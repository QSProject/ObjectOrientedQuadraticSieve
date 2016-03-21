#ifndef QSVECTOR_GUARD
#define QSVECTOR_GUARD


#include <iostream> 
#include <vector>
#include "./utils/abstract_id.h"
#include "./virtual/abstract_vector.h"

namespace QS {
namespace numeric {

template <class T>
class QSVector : public QSAbstract_vector<T> {
   
private:

   unsigned dim;
 
   std::vector<T> vec;
 
   unsigned long leftmost_1_bit;
 
   unsigned long weight;      

   QSAbstract_id id;
   

public:

   /*!
     \brief creates an empty vector of dimension = 0 setting the id
   */
   QSVector();

   /*!
     \brief creates a vector of dimension dim.
     * 
     * I won't zero initialize the vector to have more efficency
   */
   QSVector(unsigned dim);

   /*!
     \brief creates a vector of dimension dim initialized with
     *      initial_value
   */
   QSVector(unsigned dim, const T& initial_value);

   /*!
     \brief return dimension
   */
   unsigned size();

   /*!
     \brief resize the vector with dim=s and set all elems to 0
   */
   void resize(unsigned s);

   /*!
     \brief resize the vector with dim=s and set all elems to initial_value
     \param s: new dimension of my vector
     \param initial_value: value I initialize vector with
   */
   void resize(unsigned s, const T& initial_value);

   /*!
     \brief return element in position i
     \param i: position of the element to return
   */
   T get_elem(unsigned i);

   /*!
     \brief set element in position i with value elem
     \param i: position of the element to set
     \param elem: value to assign to element i-th
   */
   void set_elem(unsigned i, const T& elem);

   /*!
     \brief return the element in i-th position as a l-value
     \param i: position of the element to return
   */
   T& operator[](unsigned i); 

   /*!
     \brief return the element in i-th position as r-value
     \param i: position of the element to return
   */
   const T& operator[](unsigned i) const; 

   /*!
     \brief sum two vectors
     \param v: vector to sum with *this
   */
   QSVector<T> operator+(const QSVector<T>& v) const;

   /*!
     \brief calculates the sum of the elements in the vector if they're numeral   
   */
   void calc_wt();

   /*!
     \brief calculates the position of the leftmost bit different from zero
   */
   void calc_lft_1_bit();

   void set_id();

   /*!
     \brief print the vector
   */
   void print();
};

#include "template/vector.templates.h"

} // end of namespace numeric
} // end of namespace QS


#endif // QSVECTOR_GUARD



