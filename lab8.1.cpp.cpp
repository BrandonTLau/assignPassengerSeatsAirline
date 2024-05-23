//============================================================================
// Name        : cpp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
// exercise 8.1
//
// Write a program to assign passengers seats in an airplane. Assume a small airplane
// with seat numbering as follows: (You can assume that the columns are 4, but the rows will differ)
// tasks
// a. ask user how man rows; use dynamic array or arrays to handle the rows
// b. display/update seat patters; X marks seat taken
// c. prompt for more seats from user; end either when out of seats or user request end
// d. if user request seat already taken, report taken and ask another
// e. automated testing
// f. free memory when program ends
//
// approach one:  four one dimension array ; one for each column of seats
// 		char *colA, *colB, *colC, *colD;
//		cin >> rowsize;
//		colA = new char[rowSize];....
// approach two:  2 dimensional array
//		char **seats;
//		cin >> rowsize;
//		seats = new char*[rowsize];
// 		for (int i=0; i<rowsize; i++) { seats[i] = ew char[4]; }

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;

int main()
{
	int rowSize;
	int i;
	int seatRow;
	char seatCol;
	char *colA;
	char *colB;
	char *colC;
 	char *colD;


 	char option;
 	cout << "Enter C (console), enter F for file: ";
 	cin >> option;

 	if(option=='C'||option=='c')
 	{

 				cout << "Enter number of rows: ";
 				cin >> rowSize;

 				colA = new char[rowSize];
 				colB = new char[rowSize];
 				colC = new char[rowSize];
 				colD = new char[rowSize];

 				// initialize arrays
 				for (i=0; i<=rowSize; i++)
 				{
 					colA[i] = 'A';
 					colB[i] = 'B';
 					colC[i] = 'C';
 					colD[i] = 'D';
 				}
 				do
 					{


 							cout  << "Enter seat: ";
 							cin >> seatRow >> seatCol;
 							cout << "seatRow: " << seatRow << "  ";
 							cout << "seatCol: " << seatCol << "  ";
 							cout << endl;

 							switch (toupper(seatCol))
 							{
 								case 'A':
 									if (colA[seatRow] == 'X')
 									{ cout << "Seat aleady taken.  Try again." << endl; }
 									else { colA[seatRow] = 'X'; }
 									break;
 								case 'B':
 									if (colB[seatRow] == 'X')
 									{ cout << "Seat aleady taken.  Try again." << endl; }
 									else { colB[seatRow] = 'X'; }
 									break;
 								case 'C':
 									if (colC[seatRow] == 'X')
 									{ cout << "Seat aleady taken.  Try again." << endl; }
 									else { colC[seatRow] = 'X'; }
 									break;
 								case 'D':
 									if (colD[seatRow] == 'X')
 									{ cout << "Seat aleady taken.  Try again." << endl; }
 									else { colD[seatRow] = 'X'; }
 									break;
 							}

 							// output arrays
 				 			for (i=1; i<=rowSize; i++)
 				 			{
 				 				cout << i << "  ";
 				 				cout << colA[i] << " ";
 				 				cout << colB[i] << " ";
 				 				cout << colC[i] << " ";
 				 				cout << colD[i] << " ";
 				 				cout << endl;
 				 			}

 					} while (toupper(seatCol) != 'X' );




 	}
 	if(option=='F'||option=='f')
 	{
 		string fileName;
 		ifstream myFile("test");
 		cout << "Enter file name: ";
 		cin >> fileName;

 		if(fileName=="test")
 		{
 			myFile >> rowSize;
 			cout << rowSize;
 		}

 		colA = new char[rowSize];
 	 	colB = new char[rowSize];
 	 	colC = new char[rowSize];
 	 	colD = new char[rowSize];

 	 	for (i=1; i<=rowSize; i++)
 	 	{
 	 		colA[i] = 'A';
 	 	 	colB[i] = 'B';
 	 	 	colC[i] = 'C';
 	 	 	colD[i] = 'D';
 	 	}


 	 	do
 	 	{
 	 		cout << endl;
 	 		myFile>>seatRow>>seatCol;

 	 		switch (toupper(seatCol))
 	 	 	{
 	 	 		case 'A':
 	 	 			if (colA[seatRow] == 'X')
 	 	 			{ cout << "Seat aleady taken.  Try again." << endl; }
 	 	 			else { colA[seatRow] = 'X'; }
 	 	 			break;
 	 	 		case 'B':
 	 	 			if (colB[seatRow] == 'X')
 	 	 			{ cout << "Seat aleady taken.  Try again." << endl; }
 	 	 			else { colB[seatRow] = 'X'; }
 	 	 			break;
 	 	 		case 'C':
 	 	 			if (colC[seatRow] == 'X')
 	 	 			{ cout << "Seat aleady taken.  Try again." << endl; }
 	 	 			else { colC[seatRow] = 'X'; }
 	 	 			break;
 	 	 		case 'D':
 	 	 			if (colD[seatRow] == 'X')
 	 	 			{ cout << "Seat aleady taken.  Try again." << endl; }
 	 	 			else { colD[seatRow] = 'X'; }
 	 	 			break;
 	 	 	}

 	 	 	// output arrays
 	 	 	for (i=1; i<=rowSize; i++)
 	 	 	{
 	 	 		cout << i << "  ";
 	 	 		cout << colA[i] << " ";
 	 	 		cout << colB[i] << " ";
 	 	 		cout << colC[i] << " ";
 	 	 		cout << colD[i] << " ";
 	 	 		cout << endl;
 	 	 	}
 	 	 	if(myFile.eof())
 	 	 	{
 	 	 		break;
 	 	 	}




 	 	} while (toupper(seatCol) != 'X' );


 }



	// clean up memory
	delete[] colA;
	delete[] colB;
	delete[] colC;
	delete[] colD;

	return 0;
}
