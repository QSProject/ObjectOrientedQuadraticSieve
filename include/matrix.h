#ifndef QS_MATRIX_GUARD
#define QS_MATRIX_GUARD

#include "./utils/abstract_id.h"
#include "./virtual/abstract_matrix.h"
#include "./virtual/abstract_vector.h"




namespace QS{
namespace numeric{

template <class T>
class QSMatrix : public QSAbstract_matrix<T>{
 
  private:

   /*!
	  \brief number of rows
	 */
	 unsigned row_number;

	 /*!
     \brief number of columns
	 */
   unsigned col_number;
  
   
   std::vector<QS::numeric::QSAbstract_vector<T> >  Mat;

   public:

      ~QSMatrix();
     
      /*!
        \brief I want create a non-empty matrix
      */
      QSMatrix() = delete;
 
      /*!
        \brief Creates a matrix with i rows and j columns
      */
      QSMatrix(unsigned i, unsigned j);
 
      /*!
        \brief Creates a matrix with i rows and j columns initialized with initial_value
      */
      QSMatrix(unsigned i, unsigned j, const T& initial_value);

      /*!
        \brief Returns the element in position (i,j)
      */
      T& get_elem(unsigned i, unsigned j);

      /*!
        \brief Set element (i,j) with value elem
      */
      void set_elem(unsigned i, unsigned j, const T& elem);

      /*!
        \brief Returns row_number;  
      */
      unsigned get_row();

      /*!
        \brief Returns col_number;
      */
      unsigned get_col();

      /*!
        \brief sum two rows without modifying them
      */
      QS::numeric::QSVector<T> sum_row(unsigned i, unsigned j) const;

      /*!
        \brief find linear dependencies over the matrix
        * 
        *  This function find dependent rows of a matrix and returns an
        *    unordered_set (which is faster than a simple set) of vectors id.
        *  Those ids will be usefull when I will find dependent rows of the
        *   matrix of exponent modulo 2, cause it's necessary to sum same rows
        *   on the matrix of exponents.
      */
      std::unordered_set<QS::QSAbstract_id> find_dependencies();

};

#include "template/matrix.templates.h"

}
}

#endif // QS_MATRIX_GUARD