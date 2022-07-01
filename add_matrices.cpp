#include <iostream>
#include <stdlib.h>
int main(int argc, char* argv[]) {
	int rows = atoi(argv[1]);
	int cols = atoi(argv[2]);
	int** a = new int*[rows];
	int** b = new int*[rows];
	for(int i = 0; i < rows; i++) {
		a[i] = new int[cols];
		b[i] = new int[cols];
	}
	
	int x = 0;	
	for(int r = 0; r < rows; r++){
		for(int c = 0; c < cols; c++) {
			a[r][c] = x;
			b[r][c] = x;
			x++;
		}
	}	
	
	for(int r = 0; r < rows; r++){
		for(int c = 0; c< cols; c++){
			std::cout << a[r][c]+b[r][c] << "\n";
		}
	}
}
