#include "myheaders.h"

//function to merge temporary arrays in the sorting process
void merge(long data[], long first, long last){
	//create mid variable
	long mid = (first + last)/2;

	long i1 = 0; //index in temp
	long i2 = first; //index in left subarray
	long i3 = mid + 1; //index in right subarray

	//create the size variable using the values of first and last
	long size = last - first + 1;
	//create a dynamic pointer array to hold the temporary array
	long* temp = new long[size];

	//while both left and right subarrays of data contain elements
	while ((i2 <= mid)&&(i3 <= last)){
		//if the left subarray element is less than the right subarray element add the left subarray element to the temp array
		if (data[i2] < data[i3]){
			temp[i1++] = data[i2++];
		//else add the right subarray element to the temp array
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
		data[first + i] = temp[i];
	}

	//delete the temp array to free up space in memory
	delete[] temp;
};

//dsort mergesort function
void mergeSort(long data[], long first, long last){
	//if the first element is less than the last meaning there is more than one array element
	if (first < last){
		//create the mid variable to divide the array into two subarrays
		long mid = (first + last)/2;
		//call mergesort to sort the left subarray
		mergeSort(data, first, mid);
		//call mergesort to sort the right array
		mergeSort(data, mid+1, last);
		//finally merge the arrays together once they are sorted
		merge(data, first, last);
	}
};



