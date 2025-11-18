
#include "myheaders.h"

//Asort function - Insertion Sort
void insertionSort(long data[], long n){
	for(long i = 1, j; i < n; i++){
		// create temp variable to copy the element
		long tmp = data[i];

		for(j = i; j > 0 && tmp < data[j-1]; j--){
			// starting with second element, if the temp variable is less than the previous
			// element, then shift the previous element by one position
			data[j] = data[j-1];
		}
		// place data[i] in proper position
		data[j] = tmp;
	}
}

