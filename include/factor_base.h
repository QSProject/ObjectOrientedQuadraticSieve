#ifndef FACTOR_BASE_GUARD
#define FACTOR_BASE_GUARD 

#include <gmp>
#include "vector.h"

namespace QS {

enum legendre_value {
  IS_QUADRATIC_RESIDUE;      //  1
  IS_DIVISOR;                //  0
  IS_NOT_QUADRATIC_RESIDUE;  // -1
};

class Factor_base {

private:
   vector<unsigned long> fb;
   virtual legendre_value legendre(mpz N, unsinged long p);

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

#endif // FACTOR_BASE_GUARD