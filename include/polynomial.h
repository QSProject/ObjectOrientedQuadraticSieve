#ifndef POLYNOMIAL_GUARD
#define POLYNOMIAL_GUARD

/*!
  * This class imlements the polynomial we will evaluate in sieving.
  * This polynomyal usually has the following shape:
  * Q(A) = (A+s)^2-N 
  *
  * I will not use templatic class just to be more elastic in future implementations
  *  of QS.	
*/

template <class T>
class QSPolynomial : public QSAbstract_polynomial{

private:

   int degree;

   /*! \brief the coefficent of x^0 */
   T coef0;  

   /*! \brief the coefficent of x^0 */
   T coef1;

   /*! \brief the coefficent of x^0 */
   T coef2;

public:

   /*!
	 \brief this constructor will create (A+inf(N^(1/2)))^2 - N
   */
   QSPolynomial();

   /*!
     \brief this function builts a polynomial of degree deg,
	 *       at least 3, and with coefficents 0 for constant, 1 for x,
	         and 2 for x square, with default value equal to 1
   */
   QSPolynomial(int deg, T coef0 = 1; T coef1 = 1, T coef2 = 1);

   /*!
     \brief this function evaluates polynomial in point x
   */
   T evaluate(const T& x);

};

#endif // POLYNOMIAL_GUARD
