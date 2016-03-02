     
template <class T>      
QSMatrix<T>::QSMatrix(unsigned i, unsigned j){
   row_number = i;
   col_number = j;
   Mat.resize(i); //NB this resize works on std::vector
   for( int k=1; k<i; k++)
      Mat[k].resize(j);  //NB this resize works on QS::numeric::Vector
}

template <class T>
QSMatrix<T>::QSMatrix(unsigned i, unsigned j, const T& initial_value){
   row_number = i;
   col_number = j;
   Mat.resize(i);
   for( int k=1; k<i; k++)
      Mat[k].resize(j,initial_value);  //NB this resize works on QS::numeric::Vector
}

template <class T>
T QSMatrix<T>::get_elem(unsigned i, unsigned j){
   return Mat[i][j];
}

template <class T>
void QS::numeric::put_elem(unsigned i, unsigned j, const T& elem){
   Mat[i][j] = elem;
}

template <class T>
QS::numeric::Vector<T> QSMatrix<T>::sum_row(unsigned i, unsigned j) const{
   return QS::numeric::Vector::sum_row(Mat[i],[j]);
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