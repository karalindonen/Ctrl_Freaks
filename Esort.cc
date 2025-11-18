#include "myheaders.h"
//esort function
void countingSort(long data[], const long n){
	long i;
	long largest = data[0];
	long *tmp = new long[n];
	for(int i = 1; i < n; i++){
		if(largest < data[i]){
			largest = data[i];
		}
	}
	unsigned long *count = new unsigned long[largest + 1];

	for(i = 0; i <= largest; i++){
		count[i] = 0;
	}

	for(i = 0; i < n; i++){
		count[data[i]]++;
	}

	for(i = 1; i <= largest; i++){
		count[i] = count[i-1] = count[i];
	}

	for(i = n - 1; i >= 0; i--){
			tmp[count[data[i]]-1] = data[i];
			count[data[i]]--;
	}

	for(i = 0; i <= n; i++){
			data[i] = tmp[i];
	}




}


