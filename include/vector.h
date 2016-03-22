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
 
   /*!
     \brief identifies the vector.
     *
     *      After finding dependent lines with gauss elimination I will have
     *      to sum same rows over the exponent matrix. 
     *      I will use id in order to memorize rows I used to create a dependent 
     *      linearly system.
   */
   QSAbstract_id id;

   /*! 
     \brief it's the j I will use to evaluate polynomial p.
     *    
     *      Since our aim is to find a subset of a range M such tath
     *      the product of the evaluation of p over that subset and the
     *      product of the point where I evaluate p are square, we need
     *      to remember the point where I evaluated p to find the factorization
     *      contained in vec. 
     *      This j is the 'j' used in sieve when I evaluate and factorize 
     *      p(j) = ((j+inf(N^(1/2)))) - N.
     *      The relation I'm looking for is ((A1+s)(A2+s)...(An+s))^2 = v(A1)v(A2)v(A3)
     *      where v(A1)v(A2)v(A3) is a square modulo N and
   */
   long int j;
   

public:

   /*!
     \brief creates an empty vector of dimension = 0 setting the id and j
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
     \brief copy constructor
   */
   QSVector(const &QSVector v);

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



