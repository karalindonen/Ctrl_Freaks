#include "myheaders.h"
//csort function
void bubbleSort(long data[], long n){
	//for i to n-1 loop
	for(long i = 0; i < n-1;i++){
		//for j = the last element in the array and j > i
		for(long j = n-1; j > i; --j){
			//if data[j] is less than the element before it
			//swap the two elements in the array
			if( data[j] < data[j-1]){
				swap(data[j], data[j-1]);
			}
		}
	}
}

