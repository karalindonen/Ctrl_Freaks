#include "myheaders.h"

//counting sort
void countingSort(long data[], const long n){
	long i, j, k, l, m; //create variables for indexing and counting
	long largest = data[0]; //create largest variable and initialize to data[0]
	long* tmp = new long[n]; //create tmp array

	for (i=j=k=l=0; i<n; i++){ //find the number of negative numbers
		if (data[i] < 0){ //if negative increment the variable that holds the number of negative numbers in data[]
			j++;
		} else if (data[i] < 20000000){ //if less than 20,000,000 increment k
			k++;
		} else { //else if greater increment l
			l++;
		};
	}
	long* ne = new long[j]; //create negative array
	long* pos = new long[k]; //create positive number array < 20,000,000 to use counting sort on
	long* largePos = new long[l]; //create large positive array

	//create buckets
	for(i=j=k=l=0;i<n;i++){ //if negative element add to ne array if less than 20000000 add to pos array
		if (data[i] < 0){
			ne[j] = data[i];
			j++;
		} else if (data[i] < 20000000) { //add to pos if less than 20,000,000
			pos[k] = data[i];
			k++;
		} else { //else add to largePos
			largePos[l] = data[i];
			l++;
		}
	}

	//since the range of numbers in the input file is so large there is not enough memory to do counting sort
	//so instead we have to use a smaller subarray of data to do countingsort and sort the rest using quicksort
	quickSort(ne,0,j-1); //sort negative numbers using quick sort to avoid large range
	quickSort(largePos,0,l-1);//sort positive numbers that are greater than 500,000,000 to avoid large range

	//if the positive array has elements
	if (k != 0){
		//largest becomes the first element in pos
		largest = pos[0];
	}

	//start counting sort method
	for (i = 1;i<k;i++){ //find the largest number in positive array
		if (largest < pos[i]){
			largest = pos[i];
		}
	}
	//create the array of counters accordingly
	unsigned long *count = new unsigned long[largest+1];
	for(i=0;i<=largest;i++){//initialize to 0
		count[i] = 0;
	}
	for(i=0;i<k;i++){ //count numbers in pos[]
		count[pos[i]]++;
	}
	for(i=1;i<=largest;i++){ //count numbers <= i
		count[i] += count[i-1];
	}
	for (i=k-1;i>0;i--){ //put numbers in order in tmp[]
		tmp[count[pos[i]]-1] = pos[i];
		count[pos[i]]--;
	}
	// Handle the final element (i == 0)
	if (k > 0) {
	    tmp[count[pos[0]] - 1] = pos[0];
	    count[pos[0]]--;
	}
	delete[] count; //free memory
	//combine all the arrays back into data[]
	for(i=0;i<j;i++){ //transfer negative numbers from ne[] into data[] first
		data[i] = ne[i];
	}
	for(i=j,m=0;i<j+k;i++,m++){ //transfer positive numbers from pos[] into data[]
		data[i] = tmp[m];
	}
	for(i=k+j,m=0;m<l;i++,m++){ //transfer large positive numbers from largePos[] into data[]
		data[i] = largePos[m];
	}

	//free allocated memory
	delete[] tmp;
	delete[] ne;
	delete[] pos;
	delete[] largePos;
}

