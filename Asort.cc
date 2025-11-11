
#include "myheaders.h"

//Asort function
void insertionSort(long data[], long n){
	for(long i = 1, j; i < n; i++){
		long tmp = data[i];
		for(j = i; j > 0 && tmp < data[j-1]; j--){
			data[j] = data[j-1];
		}
		data[j] = tmp;
	}
}






