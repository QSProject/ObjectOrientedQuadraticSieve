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
   QSVector<unsigned long> fb;
   virtual legendre_value legendre(mpz N, unsinged long p);

public:
   
  /*!
  * \brief Factor_base constructor without elements has no sense.
    * it needs at least a Number N. 
  */
   QSFactor_base() = delete;
 
  // todo remember to use auxiliary file to save prime numbers
   explicit
   QSFactor_base(mpz N);
   
   QSFactor_base(mpz_N, long unsigned upper_bound);

   unsigned long operator[](unsigned int i) const;

};


}

#endif // QSFACTOR_BASE_GUARD
