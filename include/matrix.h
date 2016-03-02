#ifndef QS_MATRIX_GUARD
#define QS_MATRIX_GUARD

#include "./virtual/abstract_matrix.h"
#include "./virtual/abstract_vector.h"
namespace QS{
namespace numeric{

template <class T>
class QSMatrix : public QSAbstract_matrix<T>{
 
   private:
  
   QSMatrix();

   /*!
	  \brief number of rows
	 */
	 unsigned row_number;

	 /*!
     \brief number of columns
	 */
   unsigned col_number;
  
   std::vector<QS::numeric::QSVector<T> >  Mat;

   public:
     
      QSMatrix(unsigned i, unsigned j);

      QSMatrix(unsigned i, unsigned j, const T initial_value);

      T get_elem(unsigned i, unsigned j);

      void put_elem(unsigned i, unsigned j, const T elem);

      unsigned get_row();

      unsigned get_col();

      QS::numeric::QSVector<T> sum_row(unsigned i, unsigned j) const;

};

#include "matrix.templates.h"

}
}
#endif // QS_MATRIX_GUARD