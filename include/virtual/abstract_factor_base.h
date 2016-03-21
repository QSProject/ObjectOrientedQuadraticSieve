#ifndef QSABSTRACT_FACTOR_BASE_GUARD
#define QSABSTRACT_FACTOR_BASE_GUARD 

#include <gmpxx.h>
#include <vector>

namespace QS {

class QSAbstract_factor_base {

private:

   // Calculates legendre_number between N and P (N|p)
   virtual legendre_value legendre(mpz N, unsinged long p) = 0;

public:
   
   virtual 
   ~QSAbstract_factor_base();

   /*!
     \brief this function returns a vector containing primes number less
    *       than upper_bound using sieve of eratosthenes
  */
   virtual 
   std::vector<unsigned long> eratosthenes(unsigned long upper_bound);
   /*!
     \brief Returns element in position i as l-value
     \param i: index of element
   */
   virtual 
   unsigned long& operator[](unsigned int i) = 0;

   /*!
     \brief Returns element in position i as r-value
     \param i: index of element
   */
   virtual 
   const unsigned long& operator[](unsigned int i) const = 0;
};


} // end of namespace QS


#endif // ABSTRACT_FACTOR_BASE_GUARD


//TODO remember to use auxiliary file to save prime numbers
