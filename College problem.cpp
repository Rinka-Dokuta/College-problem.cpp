#include<iostream>
using namespace std;

int vegetarian;
int calories;

int main() {
	

	
	cout << "Enter 1 for vegetarian, 0 otherwise" << endl;
	cin >> vegetarian;

	if (vegetarian == 1) {
		cout << "Enter calories" << endl;
		cin >> calories;
		if (calories < 100)
			cout << "Fruit" << endl;
		else {
			cout << "oatmeal" << endl;
		}
	}

	if (vegetarian == 0) {
		cout << "Enter calories" << endl;
		cin >> calories;
		if (calories < 200)
			cout << "Power bar" << endl;
		else {
			cout << "Anything" << endl;
		}


	}











}
