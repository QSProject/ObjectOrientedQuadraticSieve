
template <class T>
QSVector<T>::QSVector(unsigned s){
   dim = s;
   weight = 0;
   leftmost_1_bit = 0;
   vec.resize(s);
}

template <class T>
QSVector<T>::QSVector(unsigned s, const T& initial_value){
   dim = s;
   weight = 0;
   leftmost_1_bit = 0;
   vec.resize(s, initial_value);
}

template <class T>
void QSVector<T>::calc_wt(){
   for(int i=0; i<dim; i++){
      weight += 1;
   }
}

template <class T>
void QSVector<T>::calc_lft_1_bit(){
   for(unsigned i=0; i<dim; i++){
      if(vec[i]==1)
      leftmost_1_bit = i;
      break;
   }
}

//TODO if size==0 size=t else rise exeption "alredyAllocatedQSVector"
template <class T>
void QSVector<T>::resize(unsigned s){
   dim = s;
   vec.resize(s);
}



template <class T>
const T& QSVector<T>::operator[](unsigned i) const{
   return vec[i];
}

template <class T>
T& QSVector<T>::operator[](unsigned i){
   return vec[i];
}


template <class T>
unsigned QSVector<T>::size(){
   return vec.size();
}


template <class T>
T& QSVector<T>::get_elem(unsigned i){
   return vec[i];
}

template <class T>
void QSVector<T>::set_elem(unsigned i, T elem){
   vec[i] = elem;
}
/*
template <class T>
Vector& QS::numeric::Vector<T>::operator+=(const Vector v){
    if(size!=v.size)
      return; //TODO rise an exception
   for(i=0; i<size; i++){
      vec[i]+=v[i];
   }
}
*/