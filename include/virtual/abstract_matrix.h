
#ifndef QSABSTRACT_MATRIX_GUARD
#define QSABSTRACT_MATRIX_GUARD


namespace QS {
namespace numeric {

template <typename T>
class QSAbstract_matrix {

protected: 

	/*!
	 \brief number of rows
	*/
	unsigned row_number;

	/*!
     \brief number of columns
	*/
	unsigned col_number;

public:
   /*! 
    \brief sum two row src and dst and put result in dest
    \param src first row
    \param dst second row
   */
   virtual void sum_row( unsigned src, unsigned dst) = 0;
 
   /*!
    \brief return element in position i,j
    \param i row indes
    \param j column index
   */
   virtual T get_elem(unsigned i, unsigned j) = 0; 

   /*!
    \brief set the element in position i,j
    \param i row index
    \param j column index
    \param elem element to set
   */
   virtual void put_elem(unsigned i, unsigned j, T elem) = 0;

   abstract_matrix();
   ~abstract_matrix();
	
};

}
}

#endif // ABSTRACT_MATRIX_GUARD