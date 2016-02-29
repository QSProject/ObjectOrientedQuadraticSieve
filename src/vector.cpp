
#include "../include/vector.h"



template <class T>
void QS::numeric::Vector<T>::calc_wt(){
   for(int i=0; i<size; i++){
      weight += 1;
   }
}

template <class T>
void QS::numeric::Vector<T>::calc_lft_1_bit(){
   for(unsigned i=0; i<size; i++){
      if(vec[i]==1)
      leftmost_1_bit = i;
      break
   }
}a

template <class T>
QS::numeric::Vector<T>::Vector(std::size_t t){
   size = t;
   weight = 0;
   leftmost_1_bit = 0;
   vec = std::vector<T>(t);
}

template <class T>
QS::numeric::Vector<T>::Vector(std::size_t t, T initial_value){
   size = t;
   weight = 0;
   leftmost_1_bit = 0;
   vec = new std::vector<T>(t,inizial_value);
}

//TODO if size==0 size=t else rise exeption "alredyAllocatedVector"
template <class T>
void QS::numeric::Vector<T>::resize(std::size_t t){
   size = t;

}

template <class T>
const T& QS::numeric::Vector<T>::operator[](unsigned i) const{
   return vec[i];
}

template <class T>
T& QS::numeric::Vector<T>::operator[](unsigned i){
   return vec[i];
}

template <class T>
Vector& QS::numeric::Vector<T>::operator+=(const Vector v){
    if(size!=v.size)
      return; //TODO rise an exception
	for(i=0; i<size; i++){
		vec[i]+=v[i];
	}
}