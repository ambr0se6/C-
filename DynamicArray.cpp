#include <stdlib.h>
#include <iostream>

using namespace std;

template <class T> class DynamicArray;
template <class T> class DynamicArrayIterator;

template <class T>
class DynamicArray{
    public://All the public methods are here instead of using the DynamicArray<T>:: notation    
        DynamicArray(){
            this->capacity= 10;
            this->arraySize= 0;
            this->backendArray= new T[10];
            cout << "DynamicArray is being created" << endl;
        } //this is the consctructor: declaration 
        ~DynamicArray(){
            delete [] this->backendArray;
            cout << "DynamicArray is being deleted" << endl;            
        } //this is the destructor: declaration
        void add(T item){
             //This checks if the array is full
            if(arraySize >= capacity){
                //this doubles the size of the array and moves pointers
                int dubCapacity = 2*capacity;
                T* dubArray = new T[dubCapacity];
                for(int i=0; i<arraySize;i++){
                    dubArray[i] = this->backendArray[i];
                }
                delete[] backendArray;
                this->backendArray = dubArray;
            }
            this->backendArray[arraySize] = item;
            arraySize++;
        }
        T remove(int i){
            T item = backendArray[i];
            for(int newI = i; newI<arraySize - 1; newI++){
                this->backendArray[newI] = this->backendArray[newI + 1];
            }
            --arraySize;
            return item;
        }
        //Getter Methods
        int size(){
            return this->arraySize;
        } 
        int getCapacity(){
            return this->capacity;
        }
        //Operator
        T& operator[](int i){ 
            if( i > capacity) {
                cout << "Index out of bounds, returning the 1st index" <<endl; 
                return backendArray[0];
            }
            return backendArray[i];
        } 
        //Iterators
        DynamicArrayIterator<T> begin() {
	        return DynamicArrayIterator<T>(this, 0, 1);
        }
        DynamicArrayIterator<T> end() {
	        return DynamicArrayIterator<T>(this, this->size(), 1);
        }
        DynamicArrayIterator<T> r_begin() {
	        return DynamicArrayIterator<T>(this, this->size() - 1, -1);
        }
        DynamicArrayIterator<T> r_end() {
	        return DynamicArrayIterator<T>(this, -1, -1);
        }
    private: 
        T *backendArray;
        int arraySize;
        int capacity;
};
template <class T> 
class DynamicArrayIterator{
    public://All the public methods are here instead of using the DynamicArrayIterator<T>:: notation
        DynamicArrayIterator(DynamicArray<T>* dyArray, int currentPosition, int direction){
            this->currPosition = currentPosition;
	        this->array = dyArray;
	        this->direction = direction;
        }
        //Getters
        int getCurrentPosition(){
            return this->currPosition;
        }
        int getDirection(){
            return this->direction;
        }
        //Operators
        T& operator*(){
            return (*array)[currPosition];
        }
        void operator++(){
            if (direction == 1){
		        ++currPosition;
            }else{
	            --currPosition;
	        }   
        }
        bool operator==(DynamicArrayIterator iterator){
            if (iterator.getDirection() == this->getDirection()){
                if(iterator.getCurrentPosition() == this->getCurrentPosition()){
                    if(iterator.array->getCapacity() == this->array->getCapacity()){
                        return true;
                    }else{
                        return false;
                    }
                }else{
                    return false;
                }
            }else{
                return false;
            }
        }
        bool operator!=(DynamicArrayIterator iterator){
            if (*this == iterator) {
			    return false;
		    }
		    return true;
	    }
    private:
        int currPosition;
        DynamicArray<T>* array;
        int direction;
};

