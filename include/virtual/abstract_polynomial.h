#ifndef ABSTRACT_POLYNOMIAL_GUARD
#define ABSTRACT_POLYNOMIAL_GUARD


namespace QS{
namespace numeric{

template <class T>
class QSAbstract_polynomial{

public:

   /*!
     \brief returns the degree of polynomial
   */
   virtual
   unsigned get_degree() = 0;

   /*!
     \brief evaluate the polynomial in eval
   */
   virtual
   T evaluate(const T& eval);

   /*!
	 \brief returns the coefficent of x^(i)
   */
   virtual
   unsigned get_coeff(unsigned i);

};

}
}

#endif // ABSTRACT_POLYNOMIAL_GUARD