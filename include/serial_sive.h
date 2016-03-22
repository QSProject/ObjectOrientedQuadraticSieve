/*!
  * \class QSSieve
  *
  * \brief this class implements the sieveing part of the algorithm
  *    
  *        This part is due to Ph.D Carl Pomerance and it gives the name
  *        to the algorithm. It improves Kraitchik's algorithm in complexity
  *        using something akin to the sieve of Eratosthenes to find
  *        Y-Smooth numbers.
  *        Given the factor base fb for each prime in it, when we find an evaluation
  *        of Q(A) such that Q(A) = 0 mod p then we know that for each integer k
  *        Q(A+kp) = 0 mod p. 
  *        Using this idea we can achieve a faster factorization algorithm 
  *
*/

#ifndef SIEVE_GUARD
#define SIEVE_GUARD

#include <string>
#include <iostream>
#include "./virtual/abstract_matrix.h"
#include "./virtual/abstract_polynomial.h"
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
   QSAbstract_factor_base fb;       

   /*!
     \brief Matrix of exponent
   */
   QSAbstract_matrix<int> NMat;

   /*!
     \brief Matrix of exponent modulo 2
   */
   QSAbstract_matrix<int> BMat;

public:
   
   /*!
     \brief I want create a non empty QSSieve
   */
   QSSieve() = delete;
      
   /*!
     \brief creates a QSSieve initializing N and using the Pomerance's aproximation 
	          for upper_bound	
   */
   QSSieve(std::string N);

   /*!
 	   \brief creates a QSSieve initializing N and upper_bound
   */
   QSSieve(std::string N, unsigned long upper_bound); 

   /*!
     \brief this is the function that implements the sieve.
     \param p: the polynomial to evaluate
     \param fb: the precomputed factor base
     \param m: the lower bound of the range
     \param M: the upper bound of the range
     \return it returns a matrix of factorization vectors 
     *
     *      Let p be a polynomial, M a range and v1 v2 two vectors and FB the factor base.
     *      This function evaluates p in all M's points and push evaluation in v1.
     *      Then it looks for v1's elements which are FB-Smooth factorizing them and it push
     *      in v2_i (which has same dimension of FB) the exponents of FB's primes in factorization
     *      of v1_i, then it returns a matrix containing all v2_j.
     *      In matrix Mx[i][j] I will find the value of exponent of fb(j) in factorization of
     *      p(i). (this won't be true if we are running the code over a parallel machine)
     *      
     *                

   */
   QSAbstract_matrix<unsigned> s_sieve(QSAbstract_polynomial p, QSAbstract_factor_base fb, int m, int M);

};


} // eof namespace
#endif // SIEVE_GUARD





