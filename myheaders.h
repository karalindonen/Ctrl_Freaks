
#ifndef MYHEADERS_H_
#define MYHEADERS_H_

// DO NOT forget to add the prototypes for your ASort, BSort, and other functions below!

#include <string>
#include <unistd.h>
#define MAXSIZE	 2100000

using namespace std;

void	printmenu();
void	printarray(long data[], long size);
int		readfile(string infilename, long data[]);
int		writefile(long data[], long size, string outfilename);
void	swap(long& x, long& y);
void	insertionSort(long data[], long n);
void	copyArray(long data[], long wData[], long size);
void	combSort(long data[], const long n);
void	merge(long data[], long first, long last);
void	mergeSort(long data[], long first, long last);
void	bubbleSort(long data[], long n);
void 	countingSort(long data[], long n);
void quickSort(long data[], long first, long last);



#endif /* MYHEADERS_H_ */
