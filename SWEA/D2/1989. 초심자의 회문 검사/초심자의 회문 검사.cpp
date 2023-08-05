#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string word) {
	int middle = word.length() / 2; //중간 글자 인덱스 구하기

	//끝 글자 처음 글자 비교하기
	for (int i = 0; i < middle; i++) {
		if (word[i] != word[(word.length() - 1) - i]) return false; 
	}
	return true;
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)	{
		string word;
		cin >> word;

		cout << "#" << test_case << " " << isPalindrome(word) << endl;
	}
    
	return 0;
}