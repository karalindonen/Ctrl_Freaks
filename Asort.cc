/*
 * Asort.cc
 *
 *  Created on: Nov 11, 2025
 *      Author: kara-lindonen
 */

#include "myheaders.h"

// Your ASort function(s) goes here ..
template <class A>
void inerstionSort(A data[], int n){
	for(int i = 1, j; i < n; i++){
		A tmp = data[i];
		for(j = i; j > 0 && tmp < data[j-1]; j--){
			data[j] = data[j-1];
		}
		data[j] = tmp;
	}
}




