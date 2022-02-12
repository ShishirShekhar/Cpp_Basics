#include <iostream>
using namespace std;

int main(){
	int i, j, num[3][4];

	for(i=0; i<3; ++i){
		for(j=0; j<4; ++j){
			num[i][j] = (i*4) +j+1;
			cout << num[i][j] << " ";
		}
		cout << '\n';
	}
	return 0;
}