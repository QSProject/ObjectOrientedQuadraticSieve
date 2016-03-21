#ifndef QSFACTOR_BASE_GUARD
#define QSFACTOR_BASE_GUARD 

#include <gmp.h>
#include "vector.h"

/*!
 \class Factor_base
 * This class implements a factor base for algorighm of Quadratic Sieve.
 * Factor base is a vector containing those primes number which have 
 * legendre number with N = 1, where N is the semiprime number we're going to
 * factorize
*/

namespace QS {

enum legendre_value {
  IS_QUADRATIC_RESIDUE;      //  1
  IS_DIVISOR;                //  0
  IS_NOT_QUADRATIC_RESIDUE;  // -1
};

class QSFactor_base {

private:

   /*!
     \brief it will contains prime number such that legendre(N|p)=1
   */
   QSVector<unsigned long> fb;
  

   legendre_value legendre(mpz N, unsinged long p);

public:
   
   /*! 
     \brief I want create a non empty factor_base
   */
   QSFactor_base() = delete;
 
   /*
     \brief Creates a factor base for N using the Pomerance's aproximation for the upper bound
     \param N: is the semiprime number to factorize
   */
   QSFactor_base(mpz_class N);
   
   /*! 
     \brief Creates a factor base for N using upper_bound as upper bound
     \param N: is the semiprime number to factorize
     \param upper_bound: is the upper bound value for the factor base
   */
   QSFactor_base(mpz_class N, long unsigned upper_bound);

   /*!
     \brief Returns element in position i as l-value
     \param i: index of element
   */
   unsigned long& operator[](unsigned int i);

   /*!
     \brief Returns element in position i as r-value
     \param i: index of element
   */
   const unsigned long& operator[](unsigned int i) const;

};


}

#endif // QSFACTOR_BASE_GUARD
   
