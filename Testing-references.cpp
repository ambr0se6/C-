#include <iostream>
#include <iomanip>
#include <vector>
#include <stdlib.h>
#include <algorithm>
#include <ctime>

using namespace std;

void(bubbleSort(int* p, int length));
void(mergeSort(int* p, int length));

int main() {

	cout << setw(5) << "Array Size" << setw(40) << "Time taken for Bubble Sort" << setw(40) << "Time taken for Merge Sort" << endl;
	clock_t t;

	// ATTEMPT 1 // SIZE 10
	int arraySize = 10;
	vector<int> myArray1(arraySize);
	vector<int> myArray2(arraySize);

	cout << setw(5) << arraySize;
	for (int i = 0; i < arraySize; i++) {
		myArray2[i] = myArray1[i] = rand() % arraySize + 1;
	}
	t = clock();
	bubbleSort(&myArray1[0], arraySize);
	t = clock() - t;
	cout << setw(40) << ((float)t / CLOCKS_PER_SEC) * 1000 << "\t";

	t = clock();
	mergeSort(&myArray2[0], arraySize);
	t = clock() - t;
	cout << setw(40) << ((float)t / CLOCKS_PER_SEC) * 1000 << endl;

	// ATTEMPT 2 // SIZE 20
	arraySize = 20;
	vector<int> myArray3(arraySize);
	vector<int> myArray4(arraySize);

	cout << setw(5) << arraySize;
	for (int i = 0; i < arraySize; i++) {
		myArray3[i] = myArray4[i] = rand() % arraySize + 1;
	}
	t = clock();
	bubbleSort(&myArray3[0], arraySize);
	t = clock() - t;
	cout << setw(40) << ((float)t / CLOCKS_PER_SEC) * 1000 << "\t";

	t = clock();
	mergeSort(&myArray4[0], arraySize);
	t = clock() - t;
	cout << setw(40) << ((float)t / CLOCKS_PER_SEC) * 1000 << endl;

	// ATTEMPT 3 // SIZE 40
	arraySize = 40;
	vector<int> myArray5(arraySize);
	vector<int> myArray6(arraySize);

	cout << setw(5) << arraySize;
	for (int i = 0; i < arraySize; i++) {
		myArray5[i] = myArray6[i] = rand() % arraySize + 1;
	}
	t = clock();
	bubbleSort(&myArray5[0], arraySize);
	t = clock() - t;
	cout << setw(40) << ((float)t / CLOCKS_PER_SEC) * 1000 << "\t";

	t = clock();
	mergeSort(&myArray6[0], arraySize);
	t = clock() - t;
	cout << setw(40) << ((float)t / CLOCKS_PER_SEC) * 1000 << endl;

	// ATTEMPT 4 // SIZE 80
	arraySize = 80;
	vector<int> myArray7(arraySize);
	vector<int> myArray8(arraySize);

	cout << setw(5) << arraySize;
	for (int i = 0; i < arraySize; i++) {
		myArray7[i] = myArray8[i] = rand() % arraySize + 1;
	}
	t = clock();
	bubbleSort(&myArray7[0], arraySize);
	t = clock() - t;
	cout << setw(40) << ((float)t / CLOCKS_PER_SEC) * 1000 << "\t";

	t = clock();
	mergeSort(&myArray8[0], arraySize);
	t = clock() - t;
	cout << setw(40) << ((float)t / CLOCKS_PER_SEC) * 1000 << endl;

	// ATTEMPT 5 // SIZE 160
	arraySize = 160;
	vector<int> myArray9(arraySize);
	vector<int> myArray10(arraySize);

	cout << setw(5) << arraySize;
	for (int i = 0; i < arraySize; i++) {
		myArray9[i] = myArray10[i] = rand() % arraySize + 1;
	}
	t = clock();
	bubbleSort(&myArray9[0], arraySize);
	t = clock() - t;
	cout << setw(40) << ((float)t / CLOCKS_PER_SEC) * 1000 << "\t";

	t = clock();
	mergeSort(&myArray10[0], arraySize);
	t = clock() - t;
	cout << setw(40) << ((float)t / CLOCKS_PER_SEC) * 1000 << endl;

	// ATTEMPT 6 // SIZE 320
	arraySize = 320;
	vector<int> myArray11(arraySize);
	vector<int> myArray12(arraySize);

	cout << setw(5) << arraySize;
	for (int i = 0; i < arraySize; i++) {
		myArray11[i] = myArray12[i] = rand() % arraySize + 1;
	}
	t = clock();
	bubbleSort(&myArray11[0], arraySize);
	t = clock() - t;
	cout << setw(40) << ((float)t / CLOCKS_PER_SEC) * 1000 << "\t";

	t = clock();
	mergeSort(&myArray12[0], arraySize);
	t = clock() - t;
	cout << setw(40) << ((float)t / CLOCKS_PER_SEC) * 1000 << endl;

	// ATTEMPT 7 // SIZE 640
	arraySize = 640;
	vector<int> myArray13(arraySize);
	vector<int> myArray14(arraySize);

	cout << setw(5) << arraySize;
	for (int i = 0; i < arraySize; i++) {
		myArray13[i] = myArray14[i] = rand() % arraySize + 1;
	}
	t = clock();
	bubbleSort(&myArray13[0], arraySize);
	t = clock() - t;
	cout << setw(40) << ((float)t / CLOCKS_PER_SEC) * 1000 << "\t";

	t = clock();
	mergeSort(&myArray14[0], arraySize);
	t = clock() - t;
	cout << setw(40) << ((float)t / CLOCKS_PER_SEC) * 1000<< endl;

	// ATTEMPT 8 // SIZE 1280
	arraySize = 1280;
	vector<int> myArray15(arraySize);
	vector<int> myArray16(arraySize);

	cout << setw(5) << arraySize;
	for (int i = 0; i < arraySize; i++) {
		myArray15[i] = myArray16[i] = rand() % arraySize + 1;
	}
	t = clock();
	bubbleSort(&myArray15[0], arraySize);
	t = clock() - t;
	cout << setw(40) << ((float)t / CLOCKS_PER_SEC) * 1000 << "\t";

	t = clock();
	mergeSort(&myArray16[0], arraySize);
	t = clock() - t;
	cout << setw(40) << ((float)t / CLOCKS_PER_SEC) * 1000 << endl;
	
	// ATTEMPT 9 // SIZE 2560
	arraySize = 2560;
	vector<int> myArray17(arraySize);
	vector<int> myArray18(arraySize);

	cout << setw(5) << arraySize;
	for (int i = 0; i < arraySize; i++) {
		myArray17[i] = myArray18[i] = rand() % arraySize + 1;
	}
	t = clock();
	bubbleSort(&myArray17[0], arraySize);
	t = clock() - t;
	cout << setw(40) << ((float)t / CLOCKS_PER_SEC) * 1000 << "\t";

	t = clock();
	mergeSort(&myArray18[0], arraySize);
	t = clock() - t;
	cout << setw(40) << ((float)t / CLOCKS_PER_SEC) * 1000 << endl;

	// ATTEMPT 10 // SIZE 5120
	arraySize = 5120;
	vector<int> myArray19(arraySize);
	vector<int> myArray20(arraySize);

	cout << setw(5) << arraySize;
	for (int i = 0; i < arraySize; i++) {
		myArray19[i] = myArray20[i] = rand() % arraySize + 1;
	}
	t = clock();
	bubbleSort(&myArray19[0], arraySize);
	t = clock() - t;
	cout << setw(40) << ((float)t / CLOCKS_PER_SEC) * 1000 << "\t";

	t = clock();
	mergeSort(&myArray20[0], arraySize);
	t = clock() - t;
	cout << setw(40) << ((float)t / CLOCKS_PER_SEC) * 1000 << endl;
	return 0;
}

void bubbleSort(int* p, int length) {
	for (int i = 0; i < length - 1; i++) {
		for (int j = 0; j < length - 2 - i; j++) {
			if (*(p + j) > *(p + j + 1)) {
				int temp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = temp;
			}
		}
	}
}

void mergeSort(int* p, int length) {

	int halfLength;

	if (length > 1) {

		halfLength = length / 2;

		// tried to do (*p, *(p+halfLength)) but got core dump.
		// apparently vectors do the dereferencing of the address themselves!
		vector<int> myLeftArray(p, (p+halfLength));
		vector<int> myRightArray((p + halfLength), (p + length));

		// recursive call on left and right halves of the original array
		mergeSort(&myLeftArray[0], halfLength);
		mergeSort(&myRightArray[0], length - halfLength);

		// merging the sorted left and right half back together
		merge(myLeftArray.begin(), myLeftArray.end(),
			myRightArray.begin(), myRightArray.end(), p);
	}

	
}