template <class T>     
QSMatrix<T>::QSMatrix(){
   row_number = 0;
   col_number = 0;
}

template <class T>      
QSMatrix<T>::QSMatrix(unsigned i, unsigned j){
   row_number = i;
   col_number = j;
   Mat.resize(i); //NB this resize works on std::vector
   for( int k=1; k<i; k++)
      Mat[k].QS::numeric::QSVector<T>::resize(j);  //NB this resize works on QS::numeric::QSVector
}

template <class T>
QSMatrix<T>::QSMatrix(unsigned i, unsigned j, const T& initial_value){
   this->row_number = i;
   this->col_number = j;
   
   Mat.resize(i);
   for( int k=1; k<i; k++ )
      Mat[k].QS::numeric::QSVector<T>::resize(j,initial_value);  //NB this resize works on QS::numeric::QSVector
}

template <class T>
T QSMatrix<T>::get_elem(unsigned i, unsigned j){
   return Mat[i][j];
}

template <class T>
void QSMatrix<T>::put_elem(unsigned i, unsigned j, const T& elem){
   Mat[i][j] = elem;
}

template <class T>
QS::numeric::QSVector<T> QSMatrix<T>::sum_row(unsigned i, unsigned j){
   //return QS::numeric::QSVector<T>::sum_row(Mat[i],Mat[j]);
   return QS::numeric::QSVector<T>(10,1);
}

template <class T>
inline
unsigned QSMatrix<T>::get_row(){
   return row_number;
}

template <class T>
inline
unsigned QSMatrix<T>::get_col(){
   return col_number;
}