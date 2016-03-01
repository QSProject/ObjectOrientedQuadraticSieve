#ifndef QSFACTOR_BASE_GUARD
#define QSFACTOR_BASE_GUARD 

#include <gmp>
#include "vector.h"

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
   // uneuseful
   QSFactor_base() = delete;
 
   // todo remember to use auxiliary file to save prime numbers
   explicit
   QSFactor_base(mpz N);
   
   QSFactor_base(mpz_N, long unsigned upper_bound);

   unsigned long operator[](unsigned int i) const;

};


}

#endif // QSFACTOR_BASE_GUARD