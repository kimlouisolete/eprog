#include<iostream>
using namespace std;

int main() {
	int rows = 0;
	int star = 1;
	cout << "Please enter number of rows." << endl;
	cin >> rows;
	
	for (int i = 0; i < rows; i++){
		for (int k = 0; k < (rows - i); k++) {
			cout << " ";}
		for (int h = 0; h < (((i - 1) * 2) + 1); h++){
			cout << "*";}
		for (int k = 0; k < (rows - 1 - i); k++) {
			cout << " ";}
		cout << endl;}

	for (int i = 0; i < (((rows - 1) * 2) + 1); i++){
		cout << "*";}

	return 0;}
