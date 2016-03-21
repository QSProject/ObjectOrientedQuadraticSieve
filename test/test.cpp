#include <iostream>
#include "../include/vector.h"
#include "../include/matrix.h"
//#include "../include/factor_base.h"


int main(){

   QS::numeric::QSVector<int>* Vec = new QS::numeric::QSVector<int>(10, 3);
   for(unsigned i = 0; i < Vec->size(); ++i)
      std::cout << Vec->get_elem(i) << std::endl;


   QS::numeric::QSVector<int> Vec1;
   Vec1.resize(10,4);
   Vec1.print();


   std::cout << " /************************************************************ " << std::endl;

   QS::numeric::QSMatrix<int> Mat(10,10,3);

   std::cout << "In main after QS::numeric::QSMatrix<int> Mat(10,10,3)" << std::endl;
   for(unsigned i=0; i < Mat.get_row(); ++i)
   	for(unsigned j=0; j < Mat.get_col(); ++j)
        std::cout << Mat.get_elem(i,j) << std::endl;

   std::cout << " /************************************************************ " << std::endl;

//   QS::numeric::QSMatrix<int>* Mat  = new QS::numeric::QSMatrix<int>();  
   std::cout << Mat.get_col() << std::endl;


}