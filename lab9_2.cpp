#include<iostream>
using namespace std;

//Write the function printO() here

void printO(int x ,int y){
    
	if (x<=0 || y<= 0) cout << "Invalid input";
	else for( int i = 0 ; i < x ; i++){
		for (int j=0 ; j<y ; j++){
			cout << 'O';
		}
		cout << "\n";
	}
	
}
