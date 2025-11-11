

#include <iostream>
#include <fstream>
#include "myheaders.h"

using namespace std;


// Print menu of choices to screen

void	printmenu() {

			cout << endl;
			cout << "Please choose from the following menu:" << endl;
			cout << "  1: Read input file" << endl;
			cout << "  2: Sort using Asort" << endl;
			cout << "  3: Sort using Bsort" << endl;
			cout << "  4: Sort using Csort" << endl;
			cout << "  5: Sort using Dsort" << endl;
			cout << "  6: Sort using Esort" << endl;
			cout << "  7: Sort using Fsort" << endl;
			cout << "  0: Exit program" << endl;
			cout << endl << "Enter your choice: ";

		return;

}

void	printarray(long data[], long size){
	for(long i=0; i < size; i++){
		cout << data[i] << " ";
	}
	cout << endl;
}

void	copyArray(long data[], long wData[], long size){
	for(long i=0; i < size; i++){
		wData[i] = data[i];
	}
}


