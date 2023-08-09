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
		cout << "#" << i << " " << round((double)sum / 8.0) << endl; //소수점 첫째 자리에서 반올림 해야하기 때문에 round(double형) 함수로 프린트하기..
	}

	return 0;
}
