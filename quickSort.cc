#include "myheaders.h"

// Fsort - Quicksort
// function that sorts through a process of partitioning and dividing into subarrays
void quickSort(long data[], long first, long last){

	// create variables for bounds
	int lower = first + 1;
	int upper = last;

	// exchanging first element with middle element of data
	swap(data[first], data[(first + last)/2]);

	// choose a bound
	int bound = data[first];
	//
	while (lower <= upper){
		while (bound > data[lower]){
			// move the lower bound up
			lower++;
		}
		while (bound < data[upper]){
			// move the upper bound down/decrement
			upper--;
		}
		// as long as the lower bound is less than the upper bound
		if (lower < upper){

			// exchange/swap the elements
			swap(data[lower++], data[upper--]);

		} else{
			lower++;
		}
	}

	// exchange upper bound element and first element
	swap(data[upper], data[first]);
	// if the first element is less than one less than the upper bound then
	if (first < upper-1){
		quickSort(data, first, upper-1);
	}
	if (upper+1 < last){
		quickSort(data, upper+1, last);
	}

}

