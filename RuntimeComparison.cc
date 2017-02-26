#include <iostream>
#include <iomanip>
#include <vector>
#include <ctime>


void bubbleSort(int* p,int length);
void mergeSort(int* p, int length);
int main(){
    std::cout << std::setw(2) << "Array Length" << std::setw(20) << "BubbleSort Time" << std::setw(20) << "MergeSort Time" << std::endl;
	clock_t tme;
	int alength = 10;
	for(int i=0;i<10;i++){
		std::vector<int> a1(alength);
		std::vector<int> a2(alength);
  	  //generate random #'s
		std::cout << std::setw(2) << alength;
		for (int i = 0; i < alength; i++) {
			a1[i] = a2[i] = rand() % alength + 1;
		}
   		//BubbleSort
		tme = clock();
		bubbleSort(&a1[0], alength);
		tme = clock() - tme;
		std::cout << std::setw(20) << ((float)tme / CLOCKS_PER_SEC) * 1000;
 		//MergeSort
		tme = clock();
		mergeSort(&a2[0], alength);
		tme = clock() - tme;
		std::cout << std::setw(20) << ((float)tme / CLOCKS_PER_SEC) * 1000 << std::endl;
		alength = alength*2;
	}
}
void bubbleSort(int* p, int length){
    for(int k=0; k<length; k++){
        for(int i=0; i<(length-1); i++){
            if(p[i]>p[i+1]){
                int temp = p[i];
                p[i] = p[i+1];
                p[i+1] = temp;
            }
        }
    } 
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

