
#include "myheaders.h"

//Asort function
void insertionSort(long data[], long n){
	for(long i = 1, j; i < n; i++){
		// create temp variable to copy the element
		long tmp = data[i];

		for(j = i; j > 0 && tmp < data[j-1]; j--){
			// if the next element is greater then the previous element
			// then shift the previous element by one position
			data[j] = data[j-1];
		}
		//update the second element
		data[j] = tmp;
	}
}

