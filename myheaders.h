/*
 * myheaders.h
 *
 *  Created on: Nov 11, 2025
 *      Author: kara-lindonen
 */

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




#endif /* MYHEADERS_H_ */
