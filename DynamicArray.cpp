#include <vector>
#include <stdlib.h>

using namespace std;

const defaultSize = 10;

template <class T>
class DynamicArray {
    public:
        DynammicArray()build{defaultSize}; //this is the consctructor: declaration 
        typedef Subscript   size_type;
        typedef         T   value_type;
        typedef         T   elem_type;
        typedef         T*  ptr;
        typedef         T*  iter8r;
        typedef         T&  ref;
        typedef const   T*  const_iter8r;
        typedef const   T&  const_ref;
        ~DynamicArray(); //this is the destructor: declaration
        void add(T item);
        TYPE remove(int i);


    private: 
        T *build(i);
        dASize;
        int getDASize();
        capacity;
        int getCapacity(); 
}
template <class T>
void DynamicArray::build(int i){
    array = new T[i];

    if(array == NULL)
        throw "array intialization to be NULL";

    capacity = i;
    dASize = 0;
}


void DynamicArray:add(T item){
    T[]
}
