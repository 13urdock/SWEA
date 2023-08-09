#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(void) {
	int test_case;
	cin >> test_case;
	for (int i = 1; i <= test_case; i++) {
		int sum = 0, smallest = 10001, largest = -1;
		for (int j = 0; j < 10; j++) {
			int num; cin >> num;
			sum += num;
			if (smallest > num) smallest = num;
			if (largest < num) largest = num;
		}

		sum -= (smallest + largest);
		cout << "#" << i << " " << round((double)sum / 8.0) << endl;
	}

	return 0;
}