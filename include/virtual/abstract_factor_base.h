#ifndef ABSTRACT_FACTOR_BASE_GUARD
#define ABSTRACT_FACTOR_BASE_GUARD 

#include <gmp>
#include "vector.h"

namespace QS {

class Abstract_factor_base {

private
   virtual legendre_value legendre(mpz N, unsinged long p) = 0;

public:
   // uneuseful
   Factor_base() = delete;
 
   // todo remember to use auxiliary file to save prime numbers
   explicit
   Factor_base(mpz N);
   
   Factor_base(mpz_N, long unsigned upper_bound);

   unsigned long operator[](unsigned int i) const;

};


}

#endif // ABSTRACT_FACTOR_BASE_GUARD