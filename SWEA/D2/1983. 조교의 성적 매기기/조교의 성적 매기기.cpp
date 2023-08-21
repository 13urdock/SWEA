#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main(void) {
	int test_case, students, number;
	cin >> test_case;
	vector<int> scores;
	vector<string> credit = { "A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D0" };

	for (int i = 1; i <= test_case; i++) {
		cin >> students >> number;
		scores.clear();

		for (int j = 0; j < students; j++) {
			int mid, fin, assg;
			cin >> mid >> fin >> assg;
			scores.push_back(mid * 35 + fin * 40 + assg * 20);
		}

		int k = scores[number - 1];
		sort(scores.begin(), scores.end(), greater<int>());

		//number번째 학생의 credit 출력
		for (int l = 0; l < students; l++) {
			if (k == scores[l]) {
				int portion = floor((double)((l + 0.) / students) * 10);
				string c = credit[portion];
				cout << "#" << i << " " << c << endl;
				break;
			}
		}
	}
	return 0;
}