#include <iostream>

void mergeSort(int* p, int length);
int main() {
    int p[7]={1,9,87,4,43,2,12};
    for (int i=0; i<7; i++){
        std::cout << p[i] << " ";
    }
    mergeSort(p,7);
        for (int i=0; i<7; i++){
        std::cout << p[i] << " ";
    }
    return 0;
}
void merge(int* p,int firstHalf,int secdHalf){
    int a[firstHalf+secdHalf];
    int p1=0; 
    int p2=firstHalf;
    int whole = firstHalf+secdHalf;

    for(int count=0; count < whole; count++) {
        if ((p1 < firstHalf && p[p1] <= p[p2]) || (p1 < firstHalf && p2 >= whole)){
            a[count] = p[p1++];
        }
        else{
            a[count] = p[p2++];
		}
    }                    
    for (int i=0; i < whole; i++){
        p[i] = a[i];
	}
}

void mergeSort(int* p, int length){
    int firstHalf = length/2; 
    int secdHalf = length-firstHalf;
      
    if (length > 1){
    //merge the first half
    mergeSort(p, firstHalf);
    //merge the 2nd half
    mergeSort(p+firstHalf, secdHalf);
    //merge them both together
    merge(p, firstHalf, secdHalf);
    }
    else{
        return;
    }
}