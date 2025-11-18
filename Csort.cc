#include "myheaders.h"
//csort function
void bubbleSort(long data[], long n){
	for(long i = 0; i < n-1;i++){
		for(long j = n-1; j > i; --j){
			if( data[j] < data[j-1]){
				swap(data[j], data[j-1]);
			}
		}
	}
}

