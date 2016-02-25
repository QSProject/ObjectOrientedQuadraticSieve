
#indef  ABSTRACT_VECTOR_GUARD
#define ABSTRACT_VECTOR_GUARD

namespace QS{
namespace numeric{

template <typename T>
class Abstract_vector {
     
public:
   
   Vector();

   Vector(std::size_t t);

   Vector(std::size_t t, T initial_value);

   T operator[]() const; // for reading 
   
   T& operator[](); // for writing
   
   
};


} // end of namespace numeric
} // end of namespace QS

#endif // ABSTRACT_VECTOR_GUARD