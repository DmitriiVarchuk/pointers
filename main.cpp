#include <iostream>
using namespace std;

int main() {
	int * a = new int;
	int * b = new int;

	cin >> *a;
	cin >> *b;
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	cout << *a << " and " << *b << endl;

	if (a != nullptr & b != nullptr) {
		delete a, b;
	}
	delete a, b;
	return 0;
}