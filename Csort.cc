#include "myheaders.h"

//function to merge temporary arrays in the sorting process
void merge(long data[], long first, long last){
	//create mid variable
	long mid = (first + last)/2;

	long i1 = 0; //index in temp
	long i2 = first; //index in left subarray
	long i3 = mid + 1; //index in right subarray

	long size = last - first + 1;
	long* temp = new long[size];

	while ((i2 <= mid)&&(i3 <= last)){
		if (data[i2] < data[i3]){
			temp[i1++] = data[i2++];
		} else {
			temp[i1++] = data[i3++];
		}
	}

	//load the remaining elements of the left subarray
	while (i2 <= mid){
		temp[i1++] = data[i2++];
	}

	//load the remaining elements of the right subarray
	while (i3 <= last){
		temp[i1++] = data[i3++];
	}

	//load to data the contents of temp
	for (long i=0; i<size; i++){
		data[i] = temp[i];
	}

	delete[] temp;
};

//csort function
void mergeSort(long data[], long first, long last){
	if (first < last){
		long mid = (first + last)/2;
		mergeSort(data, first, mid);
		mergeSort(data, mid+1, last);
		merge(data, first, last);
	}
};



