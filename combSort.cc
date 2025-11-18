#include "myheaders.h"

//Bsort function
void combSort(long data[], const long n){
	//create the variables for step and the two indices
	long step = n, j, k;
	//divide the step size
	//while the new step count is greater than 1
	while ((step = long (step/1.3)) > 1){				//phase 1
		//for the second to last element in the array while it is greater than or equal to the step size
		for (j = n-1; j >= step; j--){
			//the k index is equal to the difference between the j index and the step size
			k = j - step;
			//if the j element is less than the k element then swap them in the data array
			if (data[j] < data[k]){
				//call swap function
				swap(data[j],data[k]);
			}
		}
	}
	//create boolean value again
	bool again = true;
	//loop through the array until the second to last element and when again is true
	for (int i = 0; i < n-1 && again; i++){			//phase 2
		//loop through the array , set again to false, until the second to last element when again is false and j is greater than i
		for (j = n-1, again = false; j > i; --j){
			//if the j element is less than the j-1 element then swap the two elements in data
			if (data[j] < data[j-1]){
				swap(data[j],data[j-1]);
				again = true;
			}
		}
	}
}




