
#ifndef QSABSTRACT_MATRIX_GUARD
#define QSABSTRACT_MATRIX_GUARD

#include "./utils/abstract_id.h"

namespace QS {
namespace numeric {

template <class T>
class QSAbstract_matrix {

public:

   /*!
     \brief class destructor
   */
   virtual 
   ~QSAbstract_matrix();

   /*! 
    \brief sum two row src and dst and put result in dest
    \param src first row
    \param dst second row
   */
   virtual 
   QS::numeric::QSVector<T> sum_row(unsigned i, unsigned j) = 0;
 
   /*!
    \brief return element in position i,j
    \param i row indes
    \param j column index
   */
   virtual T& get_elem(unsigned i, unsigned j) = 0; 

   /*!
    \brief set the element in position i,j
    \param i row index
    \param j column index
    \param elem element to set
   */
   virtual 
   void set_elem(unsigned i, unsigned j, const T& elem) = 0;

	 /*!
     \brief returns an unordered set wich contains linear dependend rows
   */
   virtual 
   std::unordered_set<QS::QSAbstract_id> find_dependencies() = 0;

};

} // end of namespace numeric
} // end of namespace QS

#endif // ABSTRACT_MATRIX_GUARD
