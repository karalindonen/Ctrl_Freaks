

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

//print all the elements of the array
void	printarray(long data[], long size){
	for(long i=0; i < size; i++){
		cout << data[i] << " ";
	}
	cout << endl;
}

//copy an array to another array
void	copyArray(long data[], long wData[], long size){
	for(long i=0; i < size; i++){
		wData[i] = data[i];
	}
}

//swaps two elements in the array
void	swap(long& x, long& y){
	long temp1 = x;
	long temp2 = y;
	x = temp2;
	y = temp1;
}

// reads the text file
int		readfile(string infilename, long data[]){
	//create stream object for reading file
	ifstream infile;
	//create variable for while condition and index
	long d;
	long i = 0;


	//open input file for reading
	infile.open(infilename);

	//while there is another element to read from the file, add the element to the array and increment size
	while (infile >> d){
		data[i] = d;
		i++;
	}

	//close file
	infile.close();

	//return the size of the array
	return i;
}

//writes to an output file
int		writefile(long data[], long size, string outfilename){
	//create stream object for writing file
	ofstream outfile;

	//open output file for writing
	outfile.open(outfilename);

	//for loop to write the elements of the data array to the output file
	for (long i=0; i < size; i++){
		outfile << data[i] << " ";
	}

	//close file
	outfile.close();

	//return 1?
	return 1;
}


