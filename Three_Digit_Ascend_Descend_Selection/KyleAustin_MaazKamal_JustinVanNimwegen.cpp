/* 
Maaz Kamal, Kyle Austin, Justin Van Nimwegen, Yezen Higazin - 4 Edited by marcus basta

Assignment Name : Three_Digit_Ascend_Descend_Selection

Taking in data and tranfering into 'if' statements

*/

//Libraries
#include <iostream> 
#include <conio.h>

//namespaces
using namespace std;

//functions
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '/n';
}

void main() {
	int i = 0
	for (; i < = 30 ; i + +){
	int x;
	cout << "Choose a 3 Digit #" << endl; // Type a 3 digit number into the window 
	cin >> x;
	cout << "Chose wiseley " << x << endl;
	}

	int A = x / 100;
	int B = x % 100 / 10;
	int C = x % 10;

	if ((A > B) && (B > C)) {
		cout << "Decending" << endl;

	}
	else if ((A < B) && (B < C)) {
		cout << "Acending" << endl;
		}
	else {
		cout << "Neither" << endl;
	}

	pause();
}
