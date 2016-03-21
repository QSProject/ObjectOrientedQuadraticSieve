#ifndef SIEVE_GUARD
#define SIEVE_GUARD

#include <string>
v
#include <iostream>
#include "./virtual/abstract_matrix.h"
#include "./virtual/abstract_factor_base.h"


namespace QS{


class QSSieve{
 
   private:
      
      /*!
        \brief N is the semiprime I want factorize
      */
      mpz_class N;
      
      /*!
        \brief the factor base
      */
      abstract_factor_base fb;       

      /*!
        \brief Matrix of exponent
      */
      abstract_matrix<int> NMat;

      /*!
        \brief Matrix of exponent modulo 2
      */
      abstract_matrix<int> BMat;

    public:
   
      /*!
 	    \brief I want create a non empty QSSieve
      */
      QSSIeve() = delete;
      
      /*!
	    \brief creates a QSSieve initializing N and using the Pomerance's aproximation 
	           for upper_bound	
      */
      QSSIeve(std::string N);

      /*!
 	    \brief creates a QSSieve initializing N and upper_bound
      */
      QSSIeve(std::string N, unsigned long upper_bound); 

   	  sieve();

};


} // eof namespace
#endif // SIEVE_GUARD





