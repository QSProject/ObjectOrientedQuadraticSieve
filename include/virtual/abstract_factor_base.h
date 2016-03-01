#ifndef QSABSTRACT_FACTOR_BASE_GUARD
#define QSABSTRACT_FACTOR_BASE_GUARD 

#include <gmp>

namespace QS {

class QSAbstract_factor_base {

private:
   virtual legendre_value legendre(mpz N, unsinged long p) = 0;

public:
   // uneuseful
   QSAbstract_factor_base() = delete;
 
   // todo remember to use auxiliary file to save prime numbers
   explicit
   QSAbstract_factor_base(mpz N);
   
   QSAbstract_factor_base(mpz_N, long unsigned upper_bound);

   unsigned long operator[](unsigned int i) const;

};


}

#endif // ABSTRACT_FACTOR_BASE_GUARD