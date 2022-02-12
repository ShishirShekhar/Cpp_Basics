/*
Project 4-1
Bubble sort
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int num[10];
	int size = 10;
	int i, t, j;

	for (i=0; i<size; i++) num[i] = rand();
	cout << "The original list: ";
	for (i=0; i<10; i++) cout << num[i] << ' ';

	for (i=0; i<size; i++){
		for(j=0; j<size-i-1; j++){
			if (num[j] > num[j+1]){
				t = num[j];
				num[j] = num[j+1];
				num[j+1] = t;
			}
		}
	}
	
	cout << "\nThe sorted list: ";
	for (i=0; i<size; i++) cout << num[i] << " ";

	return 0;
}