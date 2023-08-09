#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double eraseandsum(vector<int>* number) {
	int smallest, largest, sum = 0;
	smallest = 10001;
	largest = -1;

	for (int i = 0; i < number->size(); i++) {
		sum += number->at(i);
		if (smallest > number->at(i)) { smallest = number->at(i); }
		if (largest < number->at(i)) { largest = number->at(i); }
	}
	sum -= (smallest + largest);

	return (double)sum;
}

int main(void) {
	int test_case;
	cin >> test_case;
	for (int i = 1; i <= test_case; i++) {
		vector<int>* number = new vector<int>;
		for (int j = 0; j < 10; j++) {
			int num; cin >> num;
			number->push_back(num);
		}
		cout << "#" << i << " " << round(eraseandsum(number) / 8.0) << endl;
		delete number;
	}

	return 0;
}